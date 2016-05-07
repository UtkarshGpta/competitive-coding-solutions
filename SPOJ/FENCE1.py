import math

l = int(input())

while (l!=0):
    area = ((l*l) / (2*math.pi))
    print("%.2f" % area)
    l = int(input())