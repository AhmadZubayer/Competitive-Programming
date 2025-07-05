// https://codeforces.com/contest/2112/problem/B

#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool isBeautiful = false;
        for (int i = 0; i < n - 1; i++) {
            if (abs(b[i] - b[i + 1]) <= 1) {
                isBeautiful = true;
                break;
            }
        }

        if (isBeautiful) {
            cout << 0 << endl;
        } else {
            if (n <= 2) {
                cout << -1 << endl;
            } else {
                bool isPossible = false;
                for (int i = 1; i < n - 1; i++) {
                    if ((b[i] > b[i - 1] && b[i] > b[i + 1]) || (b[i] < b[i - 1] && b[i] < b[i + 1])) {
                        cout << 1 << endl;
                       isPossible = true;
                        break;
                    }
                }
                if (!isPossible) {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}
