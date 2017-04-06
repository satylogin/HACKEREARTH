dp = [[-1 for i in range(501)] for j in range(501)]

def get(i, j):
    if j < i:
        return 0
    if dp[i][j] != -1:
        return dp[i][j]
    dp[i][j] = 1 + min(get(i+1, j), get(i, j-1))
    for x in range(i+1, j+1):
        if (arr[x] == arr[i]):
            dp[i][j] = min(dp[i][j], get(i+1, x-1) + get(x+1, j))
    return dp[i][j]

n = int(input())
arr = list(map(int, input().split(" ")))
print(get(0, n-1))
