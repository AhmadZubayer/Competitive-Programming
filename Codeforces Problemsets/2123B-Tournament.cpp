// https://codeforces.com/contest/2123/problem/B

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }
        if (a[j - 1] == *max_element(a, a + n)) { 
            cout << "YES" << endl;
        } else {
            if (k == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
        delete[] a;  
    }
    return 0;
}
