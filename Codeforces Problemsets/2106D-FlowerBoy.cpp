// https://codeforces.com/contest/2106/problem/D

#include <iostream>
using namespace std;

bool canMatch(int* a, int n, int* b, int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] >= b[j]) j++;
        i++;
    }
    return j == m;
}

void magicFlower(int n, int m, int a[], int b[]) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] >= b[j]) j++;
        i++;
    }

    if (j == m) {
        cout << 0 << endl;
        return;
    }

    int K = -1;
    for (int bi = 0; bi < m; bi++) {
        for (int pos = 0; pos <= n; pos++) {
            int* temp = new int[n + 1];
            for (int i = 0; i < pos; i++) {
                temp[i] = a[i];
            }
            temp[pos] = b[bi];
            for (int i = pos; i < n; i++){
                temp[i + 1] = a[i];
            } 

            if (canMatch(temp, n + 1, b, m)) {
                if (K == -1 || b[bi] < K) {
                    K = b[bi];
            }
        }

            delete[] temp;
        }
    }

    cout << K << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int* a = new int[n];
        int* b = new int[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        magicFlower(n, m, a, b);

        delete[] a;
        delete[] b;
    }
}
