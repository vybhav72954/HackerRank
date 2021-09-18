def victor(num):
    if len(num) == 0:
        return []
    if len(num) == 1:
        return [num]
    listed = []
    for i in range(len(num)):
        m = num[i]
        remain = num[:i] + num[i+1:]
        for p in victor(remain):
            listed.append([m] + p)
    return listed

def target(size , lst , k):
    tgtList = []
    for p in victor(lst):
        iterSum = p[0]
        cost = 0
        for i in range(1 , size):
            iterSum += p[i]
            cost += (k*iterSum)
        tgtList.append(cost)
    tgtValue = tgtList[0]
    for i in tgtList:
        if(tgtValue > i):
            tgtValue = i
    return tgtValue

print (target(3 , [1,2,3] , 2))
