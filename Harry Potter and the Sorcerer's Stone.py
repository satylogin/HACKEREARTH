from collections import deque

ans = [[-1 for x in range(10)] for y in range(10)]

def bfs(x, y):
    q = deque([])
    q.append((x, y))

    ans[x][y] = 0
    while q:
        x, y = q.popleft()
    
        a = x+2
        b = y+1
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))
        
        a = x+2
        b = y-1
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

        a = x-2
        b = y+1
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

        a = x-2
        b = y-1
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

        a = x+1
        b = y+2
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

        a = x+1
        b = y-2
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

        a = x-1
        b = y+2
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

        a = x-1
        b = y-2
        if (a > 0 and a < 9 and b > 0 and b < 9 and ans[a][b] == -1):
            ans[a][b] = ans[x][y] + 1
            q.append((a, b))

x1, y1, x2, y2 = tuple(map(int, input().split()))
bfs(x2, y2)
print(ans[x1][y1])
