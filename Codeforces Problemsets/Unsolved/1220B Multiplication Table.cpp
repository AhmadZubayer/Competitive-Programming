// https://codeforces.com/contest/1220/problem/B

#include <iostream>
using namespace std;


void gcd(int row[], int num) {
    for (int i = 1; i < num; i++) {
        int u = row[0];
        int v = row[i];
        while (v != 0) {
            int temp = v;
            v = u % v;
            u = temp;
        }
        row[0] = u;
        if (row[0] == 1) {
            break;
        }
    }
    cout << row[0] << " ";
}


int main() {
    int n;
    cin >> n;
    int m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        gcd(m[i], n);
    }
    return 0;
}
