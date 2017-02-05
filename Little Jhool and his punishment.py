t = int(input())
for xt in range(t):
    n = int(input())
    a, b = tuple(map(int, input().split()))
    x = min(a, b)
    a -= x
    b -= x
    if (a > 1 or b > 1):
        print("Little Jhool wins!")
    else:
        print("The teacher wins!")
