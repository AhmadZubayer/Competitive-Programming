// https://codeforces.com/problemset/problem/2106/C

#include <iostream>
#include <algorithm>
using namespace std;

void fillElements(int n, int k, int a[], int b[]) {
    int x = -1;
    bool allLost = true;

    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            x = a[i] + b[i]; 
            allLost = false;
            break;
        }
    }

    if (allLost) {
        int low = *max_element(a, a + n);
        int high = k + *min_element(a, a + n);
        int ways = max(0, high - low + 1);
        cout << ways << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] != -1 && a[i] + b[i] != x) {
            cout << 0 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        if (b[i] == -1) {
            int bi = x - a[i];
            if (bi < 0 || bi > k) {
                cout << 0 << endl;
                return;
            }
        }
    }

    cout << 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int* a = new int[n];
        int* b = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        fillElements(n, k, a, b);
        delete[] a;
        delete[] b;
    }
    return 0;
}
