# Codechef Easy problem HOLES

test = int(input())

for index in range(test):
    str_inp = raw_input()
    counter = 0
    for x in str_inp:
        if x == 'A' or x == 'D' or x == 'O' or x == 'P' or x == 'Q' or x == 'R':
            counter += 1
        elif x == 'B':
            counter += 2

    print counter
