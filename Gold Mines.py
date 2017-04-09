n, m = tuple(map(int, input().split()))
dp = [[0 for i in range(m+1)]]
for i in range(1, n+1):
    dp.append([0] + list(map(int, input().split())))
for i in range(1, n+1):
    for j in range(1, m+1):
        dp[i][j] += dp[i][j-1] - dp[i-1][j-1] + dp[i-1][j]
for qt in range(int(input())):
    x1, y1, x2, y2 = tuple(map(int, input().split()))
    print(dp[x2][y2] + dp[x1-1][y1-1] - dp[x2][y1-1] - dp[x1-1][y2])
