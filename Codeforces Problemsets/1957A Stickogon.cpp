// https://codeforces.com/contest/1957/problem/A

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t, n;
    cin >> t;
    if (1 <= t && t <= 100) {
        for (int i = 0; i < t; i++) {
            cin >> n;
            if (1 <= n && n <= 100) {
                int a[n];
                for (int j = 0; j < n; j++) {
                    cin >> a[j];
                }
                if (n < 3) {
                    cout << "0" << endl;
                } else {
                    map<int, int> freq;
                    for (int j = 0; j < n; j++) {
                        freq[a[j]]++;
                    }
                    int counter = 0;
                    for (int l = 1; l <= 100; l++) {
                        if (freq[l] >= 3) {
                            counter += freq[l] / 3;
                        }
                    }
                    cout << counter << endl;
                }
            }
        }
    }
    return 0;
}
