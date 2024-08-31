#include <iostream>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;

    if (1 <= t && t <= 5940) {
        for (int i = 0; i < t; i++) {
            cin >> a >> b >> c >> d;

            if (1 <= a && a <= 12 && 1 <= b && b <= 12 && 1 <= c && c <= 12 && 1 <= d && d <= 12) {
                bool cIsFound = false, dIsFound = false;

                if (a < b) {
                    for (int i = a; i <= b; i++) {
                        if (i == c) cIsFound = true;
                        if (i == d) dIsFound = true;
                    }
                } else {
                    for (int i = a; i <= 12; i++) {
                        if (i == c) cIsFound = true;
                        if (i == d) dIsFound = true;
                    }
                    for (int i = 1; i <= b; i++) {
                        if (i == c) cIsFound = true;
                        if (i == d) dIsFound = true;
                    }
                }

                if ((cIsFound && !dIsFound) || (!cIsFound && dIsFound)) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}
