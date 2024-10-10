// https://codeforces.com/problemset/problem/2020/A
// Soln- 01 TIME LIMIT EXCEEDED
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        int count = 0;

        if (k == 1) {
            count = n;
        } else {
            while (n > 0) {
                int x = 0;
                while (pow(k, x) <= n) {
                    x++;  
                }
                x--;  
                n -= pow(k, x);
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
