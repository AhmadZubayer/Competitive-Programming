t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    if sum(a) == x * n:
        print("YES")
    else:
        print("NO")