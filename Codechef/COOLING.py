# Codechef Easy problem COOLING

test = int(input())
for index in range(test):
    N = int(input())                #Number of pies N
    pie_weight = []
    weight_limit = []
    for _ in range (N):
        pie_weight.append( int(raw_input()) )

    for _ in range(N):
        weight_limit.append( int(raw_input()) )

    pie_weight.sort()
    weight_limit.sort()

    answer = 0
    start = 0
    for index1 in range(N):
        for index2 in range(start,N):
            if pie_weight[index1] <= weight_limit[index2]:
                answer += 1
                start = index2+1
                break

    print answer