#MAY Long Contest

t = int(raw_input())

while t>0:

    user_input = raw_input().split()
    activities = int(user_input[0])
    origin = user_input[1]
    laddus = 0

    while activities>0:
        user_input = raw_input().split()
        a = user_input[0]
        if a == "CONTEST_WON":
            b = int(user_input[1])
            bonus = 0

            if b<=20:
                bonus = 20 - b
            laddus = laddus + 300 + bonus

        elif a == "BUG_FOUND":
            b = int(user_input[1])
            laddus = laddus + b

        elif a == "TOP_CONTRIBUTOR":
            laddus = laddus + 300

        elif a == "CONTEST_HOSTED":
            laddus = laddus + 50

        activities = activities -1

    if origin == "INDIAN" :
        print int(laddus/200)
    elif origin == "NON_INDIAN":
        print int(laddus/400)

    t = t - 1