floor = 6

for i in range(floor+1):
    print(' ' * (floor - i), end='')
    print('*' * (2 * i - 1))


for i in range(3):
    print(' ' * (floor - 2), end='')
    print('*' * 3)