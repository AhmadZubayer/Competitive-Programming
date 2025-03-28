#https://codeforces.com/problemset/problem/2082/A

def check_good_matrix(matrix, n, m):
    count_row = 0
    count_col = 0
    for i in range(n):
        row_sum = sum(matrix[i])
        if row_sum % 2 != 0:
            count_row += 1

    for j in range(m):
        col_sum = sum(matrix[i][j] for i in range(n))  
        if col_sum % 2 != 0:
            count_col += 1

    return (max(count_col,count_row))

def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        matrix = []
        for _ in range(n):
            row = list(map(int, input().strip()))
            matrix.append(row)
        print(check_good_matrix(matrix, n, m))

if __name__ == "__main__":
    main()