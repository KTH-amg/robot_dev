// 핀 설정
const int floor_pin[7] = {14, 2, 3, 4, 5, 6, 7};
const int call_led[3] = {8, 9, 10};
const int call_btn[3] = {11, 12, 13};

// 엘리베이터 상태
enum Direction { STOP, UP, DOWN };
Direction direction = STOP;

int cur_floor = 1;
int target_floor = 1;
bool prev_btn_state[3] = {false, false, false};

bool moving = false;
int move_stage = 0; // 0: 빨강, 1: 노랑1, 2: 노랑2, 3: 도착

unsigned long last_step_time = 0;
const unsigned long step_delay = 700; // 각 단계 지연 시간 (ms)

// 요청 큐
int reqQueue[5]; // 최대 5개 요청 저장
int req_count = 0;

void setup() 
{
  Serial.begin(9600);
  for (int i = 0; i < 7; i++)
  {
    pinMode(floor_pin[i], OUTPUT);
  }

  for (int i = 0; i < 3; i++) 
  {
    pinMode(call_led[i], OUTPUT);
    pinMode(call_btn[i], INPUT);
  }

  digitalWrite(floor_pin[(cur_floor-1) * 3], HIGH);
}

void loop() 
{
  checkButtons();
  handleElevator();
}

// 버튼 입력 처리
void checkButtons() 
{
  for (int i = 0; i < 3; i++) 
  {
    bool cur_btn_state = digitalRead(call_btn[i]);
    if (cur_btn_state && !prev_btn_state[i]) 
    {
      digitalWrite(call_led[i], HIGH);
      int floor = i + 1;

      if (floor == cur_floor && !moving) 
      {
        digitalWrite(call_led[i], LOW);
      }
      else if (!isRequested(floor)) 
      {
        if (req_count < 5)
        {
          reqQueue[req_count++] = i+1;
          if (!moving) update_target();
        }
      }
      else
      {
        digitalWrite(call_led[i], LOW);
        remove_request(i+1);
      }
    }
    prev_btn_state[i] = cur_btn_state;
  }
}

bool isRequested(int floor)
{
  for (int i = 0; i < req_count; i++) 
  {
    if (reqQueue[i] == floor) return true;
  }
  return false;
}

int find_next_req() 
{
  int min_dist = 3;
  int nearest = -1;

  for (int i = 0; i < req_count; i++) 
  {
    int floor = reqQueue[i];
    int dist = abs(floor - cur_floor);

    if (direction == UP && floor > cur_floor && dist < min_dist) 
    {
      min_dist = dist;
      nearest = floor;
    }
    else if (direction == DOWN && floor > cur_floor && dist < min_dist)
    {
      min_dist = dist;
      nearest = floor;
    }
  }

  if (nearest == -1)
  {
    if (req_count == 0)
    {
      if (direction == UP)
      {
        nearest = cur_floor + 1;
      }
      else
      {
        nearest = cur_floor - 1;
      }
    }
    else
    {
      for (int i = 0; i < req_count; i++) 
      {
        int floor = reqQueue[i];
        int dist = abs(floor - cur_floor);

        if (dist < min_dist) 
        {
          min_dist = dist;
          nearest = floor;
        }
      }
    }
  }

  return nearest;
}

// 목적지 설정
void update_target() 
{
  if (req_count == 0) 
  {
    if (direction == UP && cur_floor < 3)
    {
      target_floor = cur_floor + 1;
    }
    else if (direction == DOWN && cur_floor > 1)
    {
      target_floor = cur_floor - 1;
    }
    //direction = STOP;
    //target_floor = cur_floor;
    //moving = false;
    return;
  }

  int next = find_next_req();

  if (next == -1 || next == cur_floor)
  {
    direction = STOP;
    moving = false;
    remove_request(next);
    digitalWrite(call_led[next - 1], LOW);
    return;
  }
  
  //target_floor = reqQueue[0];
  target_floor = next;

  direction = (target_floor > cur_floor) ? UP : DOWN;
  if (!moving)
  {
    move_stage = 0;
    //moving = true;
    last_step_time = millis();
  }
  moving = true;
}

// 엘리베이터 이동 처리
void handleElevator() 
{
  if (!moving) return;

  unsigned long cur_time = millis();
  if (cur_time - last_step_time < step_delay) return;

  last_step_time = cur_time;
  clear_light();

  switch (move_stage) 
  {
    case 0:
      /*
      digitalWrite(redLED[cur_floor], HIGH); // 현재 층 빨간 LED
      break;
      */
      digitalWrite(floor_pin[(cur_floor-1) * 3], LOW);
      if (req_count == 0)
      {
        digitalWrite(floor_pin[(cur_floor-1) * 3], HIGH);
        direction = STOP;
        moving = false;
      }
      break;
    case 1:
      move_progress(cur_floor, direction, 0); // 노란 LED 1
      break;
    case 2:
      move_progress(cur_floor, direction, 1); // 노란 LED 2
      break;
    case 3:
      // 층 이동
      if (direction == UP) cur_floor++;
      else if (direction == DOWN) cur_floor--;

      digitalWrite(floor_pin[(cur_floor-1) * 3], HIGH);

      if (isRequested(cur_floor))
      {
        digitalWrite(call_led[cur_floor-1], LOW);
        remove_request(cur_floor);
      }

      if (req_count == 0) 
      {
        direction = STOP;
        moving = false;
      }

      break;
  }

  move_stage = (move_stage + 1) % 4;
  update_target(); // 다음 요청 반영 (이전 루프에서 멈췄던 경우)
}

// 모든 LED 끄기
void clear_light() {
  for (int i = 0; i < 7; i++) 
  {
    digitalWrite(floor_pin[i], LOW);
  }
}

// 노란 LED 점등 (단계별)
void move_progress(int floor, Direction dir, int stage) 
{
  if (dir == UP) 
  {
    if (floor == 1 && stage == 0) digitalWrite(floor_pin[1], HIGH);
    if (floor == 1 && stage == 1) digitalWrite(floor_pin[2], HIGH);
    if (floor == 2 && stage == 0) digitalWrite(floor_pin[4], HIGH);
    if (floor == 2 && stage == 1) digitalWrite(floor_pin[5], HIGH);
  }
  else if (dir == DOWN) 
  {
    if (floor == 3 && stage == 0) digitalWrite(floor_pin[5], HIGH);
    if (floor == 3 && stage == 1) digitalWrite(floor_pin[4], HIGH);
    if (floor == 2 && stage == 0) digitalWrite(floor_pin[2], HIGH);
    if (floor == 2 && stage == 1) digitalWrite(floor_pin[1], HIGH);
  }
}

// 요청 큐에서 층 제거
void remove_request(int floor) 
{
  int index = -1;
  for (int i = 0; i < req_count; i++) 
  {
    if (reqQueue[i] == floor) 
    {
      index = i;
      break;
    }
  }

  if (index != -1) 
  {
    for (int i = index; i < req_count - 1; i++) 
    {
      reqQueue[i] = reqQueue[i + 1];
    }
    req_count--;

    //update_target();
  }
}