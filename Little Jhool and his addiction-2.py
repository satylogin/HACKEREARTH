t = int(input())
for xt in range(t):
    n, k = tuple(map(int, input().split()))
    arr = list(map(int, input().split()))
    arr.sort()
    i = 0
    j = n-1
    a = 0
    b = 9999999999
    while (i < j):
        clc = arr[i] + arr[j]
        if clc > a:
            a = clc
        if clc < b:
            b = clc
        i += 1
        j -= 1
    print(a-b)
    if a-b > k:
        print("No more girlfriends!")
    elif a-b == k:
        print("Lucky chap!")
    else:
        print("Chick magnet Jhool!")
    
