a = int(input())
a-=1
while True:
    sum = 0
    a+=1
    i = a
    while i > 0:
        sum += i%10
        i/=10
        i = int(i)
    if sum%4 == 0:
        break

print(a)
