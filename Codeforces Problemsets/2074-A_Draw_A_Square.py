#https://codeforces.com/contest/2074/problem/A

t = int(input())
for _ in range(t):
    l, r, d, u = map(int, input().split())
    if l == r == d == u:
        print("YES")
    else:
        print("NO")