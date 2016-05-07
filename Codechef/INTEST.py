# Codechef Beginner Problem INTEST

user_input = raw_input().split()
n = int(user_input[0])
k = int(user_input[1])

c = 0

while n>0 :
    t = int(raw_input())
    if t%k == 0:
        c+=1
    n-=1

print c