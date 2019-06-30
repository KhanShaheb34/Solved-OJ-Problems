q = int(input())
for i in range(q):
    n, k = [int(x) for x in input().split()]
    x = [int(x) for x in input().split()]
    x.sort()

    if (x[0] + k) < (x[n-1] - k):
        print(-1)
    else:
        print(x[0]+k)
