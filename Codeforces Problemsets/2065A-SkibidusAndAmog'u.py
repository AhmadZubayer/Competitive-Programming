def to_plural(str):
    return str[:-2] + 'i'
 
t = int(input())
for i in range(t):
    str = input()
    print(to_plural(str))