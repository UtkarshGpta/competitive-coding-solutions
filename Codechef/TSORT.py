# Codechef Beginner Problem TSORT

t = int(raw_input())
list = []

for _ in range(t):
    k = int(raw_input())
    list.append(k)

list.sort()
for _ in range(t):
    print list[_]