import openai
import os
import speech_recognition as sr
import pyttsx3
import time
import os
os.environ["OPENAI_API_KEY"] = "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"

# 🔑 API 키 설정
openai.api_key = os.getenv("OPENAI_API_KEY")

# 🎤 음성 인식기 초기화
recognizer = sr.Recognizer()
mic = sr.Microphone()

# 🔊 TTS 초기화
engine = pyttsx3.init()
engine.setProperty('rate', 180)  # 말 속도 조절

def stt_whisper():
    print("\n🎙️ 질문을 말하세요...")
    with mic as source:
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)
        print("📤 음성 인식 중...")

    # Whisper API를 이용한 STT
    try:
        audio_file = "temp.wav"
        with open(audio_file, "wb") as f:
            f.write(audio.get_wav_data())

        with open(audio_file, "rb") as f:
            transcript = openai.Audio.transcribe("whisper-1", f)
        os.remove(audio_file)
        return transcript["text"]
    except Exception as e:
        print(f"❌ STT 실패: {e}")
        return None

def gpt_response(prompt):
    print("🤖 GPT-4 응답 생성 중...")
    try:
        res = openai.ChatCompletion.create(
            model="gpt-4",
            messages=[{"role": "user", "content": prompt}]
        )
        reply = res.choices[0].message["content"]
        return reply.strip()
    except Exception as e:
        print(f"❌ GPT 호출 실패: {e}")
        return "죄송합니다, 다시 말씀해 주세요."

def tts_speak(text):
    print("🗣️ 응답 재생 중...")
    engine.say(text)
    engine.runAndWait()

def main_loop():
    print("🌀 음성 기반 챗봇 시작 (Ctrl+C로 종료)")
    while True:
        try:
            question = stt_whisper()
            if not question:
                continue
            print(f"👂 사용자: {question}")
            response = gpt_response(question)
            print(f"🤖 GPT: {response}")
            tts_speak(response)
            time.sleep(1)
        except KeyboardInterrupt:
            print("\n👋 종료합니다.")
            break

if __name__ == '__main__':
    main_loop()