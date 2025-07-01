#include <iostream>
using namespace std;

bool canMatchWithK(int* a, int n, int* j, int m, int k) {
    for (int pos = 0; pos <= n; pos++) {
        int i = 0, x = 0;
        while (i <= n && x < m) {
            int val;
            if (i == pos) val = k;
            else val = a[i < pos ? i : i - 1];

            if (val >= j[x]) x++;
            i++;
        }
        if (x == m) return true;
    }
    return false;
}

int findMinK(int* a, int n, int* j, int m) {
    int i = 0, x = 0;
    while (i < n && x < m) {
        if (a[i] >= j[x]) x++;
        i++;
    }
    if (x == m) return 0;

    int low = 1, high = 1e9, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canMatchWithK(a, n, j, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int* a = new int[n];
        int* j = new int[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> j[i];

        cout << findMinK(a, n, j, m) << endl;

        delete[] a;
        delete[] j;
    }
}
