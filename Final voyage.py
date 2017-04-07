ks = [[0 for i in range(1001)] for j in range(1001)]

for xt in range(int(input())):
    try:
        n = int(input())
        m = int(input())
        w = list(map(int, input().split()))
        c = list(map(int, input().split()))
        for i in range(n+1):
            for j in range(m+1):
                if (i == 0 or j == 0): 
                    ks[i][j] = 0
                elif (j < w[i-1]):
                    ks[i][j] = ks[i-1][j]
                else:
                    ks[i][j] = max(ks[i-1][j], c[i-1] + ks[i-1][j-w[i-1]])
        print(ks[n][m])
    except:
        print(0)
