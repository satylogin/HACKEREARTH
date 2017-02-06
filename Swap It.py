t = int(input())
for xt in range(t):
    n, cnt = tuple(map(int, input().split()))
    arr = list(map(int, input().split()))
    y = 0;

    for i in range(n):
        x = i;
        for j in range(i+1, n):
            if (arr[j] < arr[x] and j-i <= cnt):
                x = j
        cnt -= x-i;
        tmp = arr[x]
        for j in range(x, i, -1):
            arr[j] = arr[j-1]
        arr[i] = tmp
    for i in range(n):
        print(arr[i], end = " ")
    print()
