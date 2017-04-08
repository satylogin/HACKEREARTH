def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)


dp = [[0 for i in range(501)] for j in range(501)]

MOD = 1000000007
n = int(input())
arr = list(map(lambda x: int(x), input().split()))

for i in range(n):
    dp[i][arr[i]] = 1
    for j in range(i-1, -1, -1):
        if (arr[j] < arr[i]):
            for k in range(1, 101):
                g = gcd(k, arr[i])
                dp[i][g] += dp[j][k]
                if (dp[i][g] >= MOD):
                    dp[i][g] -= MOD
ans = 0
for i in range(n):
    ans += dp[i][1]
    if (ans >= MOD):
        ans -= MOD

print(ans)
