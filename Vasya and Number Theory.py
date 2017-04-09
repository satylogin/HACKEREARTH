dp = [0 for i in range(1001)]
n = int(input())
arr = list(map(int, input().split()))
arr.sort()
x = 0
for i in range(n):
    dp[i] = max(dp[i], 1)
    for j in range(i+1, n):
        if (arr[j] % arr[i] == 0):
            dp[j] = max(dp[j], 1 + dp[i]);
    x = max(x, dp[i])
if (x <= 1):
    print(-1)
else:
    print(x)
