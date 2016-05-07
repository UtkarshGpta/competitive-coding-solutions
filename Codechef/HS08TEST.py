# Codechef Beginner Problem HS08TEST

user_input = raw_input().split()
x = int(user_input[0])
y = float(user_input[1])

if (x % 5 == 0) and (x+0.5) <= y:
    y = y-x-0.50

print("%.2f" %y)