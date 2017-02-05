t = int(input())
for xt in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    x = y = 0
    i = 0
    j = n-1
    tm = tr = 0
    while (i <= j):
        if (tm <= tr):
            x += 1
            tm += arr[i]
            i += 1
        else:
            y += 1
            tr += 2*arr[j]
            j -= 1
    print(x, y)
        
