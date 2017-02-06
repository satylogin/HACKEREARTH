n = int(input())
arr = list(map(int, input().split()))
clc = []
arr.sort()
i = 0
j = n-1
for k in range(n):
    if (k&1):
        clc.append(arr[j])
        j -= 1
    else:
        clc.append(arr[i])
        i += 1
ans = 0
clc.append(arr[0])
for i in range(n):
    ans += abs(clc[i]-clc[i+1])
print(ans)
