ans = [[0 for i in range(1001)] for j in range(1001)]
ans[0][0] = 1
MOD = 1000000007
for i in  range(1, 1001):
    for j in range(i+1):
        if (j == 0):
            ans[i][j] = 1
        else:
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j]
            if ans[i][j] >= MOD:
                ans[i][j] -= MOD
for i in range(1, 1001):
    for j in range(1, i+1):
        ans[i][j] += ans[i][j-1];
        if (ans[i][j] >= MOD):
            ans[i][j] -= MOD
t = int(input())
for xt in range(t):
    n, m = tuple(map(int, input().split()))
    print(ans[n][m])
