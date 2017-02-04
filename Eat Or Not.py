y = input().split()
A, B, C, D = int(y[0]), int(y[1]), int(y[2]), int(y[3])
n = int(input())

a = [0] * 30
b = [0] * 30
c = [0] * 30
d = [0] * 30

for i in range(n):
    y = input().split()
    a[i], b[i], c[i], d[i] = int(y[0]), int(y[1]), int(y[2]), int(y[3])

lim = 1<<n
a1 = a2 = a3 = a4 = 0
for i in range(lim):
    a1 = a2 = a3 = a4 = 0
    for j in range(n):
        if (i&(1<<j)):
            a1, a2, a3, a4 = a1+a[j], a2 + b[j], a3 + c[j], a4 + d[j]
    #print(str(i) + " " + str(a1) + " " + str(a2) + " " + str(a3) + " " + str(a4))
    if (a1 == A and a2 == B and a3 == C and a4 == D):
        print("YES")
        exit(0)
print("NO")
