// https://codeforces.com/problemset/problem/10/A
// Submission: https://codeforces.com/problemset/submission/10/278903925

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<pair<int, int>> periods(n);
    for (int i = 0; i < n; i++) {
        cin >> periods[i].first >> periods[i].second;
    }

    int totalConsumed = 0;


    for (int i = 0; i < n; i++) {
        int activeTime = periods[i].second - periods[i].first;
        totalConsumed += activeTime * P1;
    }


    for (int i = 0; i < n - 1; i++) {
        int idleTime = periods[i + 1].first - periods[i].second;

        if (idleTime <= T1) {
            totalConsumed += idleTime * P1;
        } else if (idleTime <= T1 + T2) {
            totalConsumed += T1 * P1 + (idleTime - T1) * P2;
        } else {
            totalConsumed += T1 * P1 + T2 * P2 + (idleTime - T1 - T2) * P3;
        }
    }

    cout << totalConsumed << endl;

    return 0;
}

/*
vector<pair<int, int>> periods(n);
   - a vector named periods of size n where each element is a pair<int, int>
   - A pair<int, int> is a simple container from the C++ Standard Library that can store two values of type int.
   - first: Represents the start time (li) of an active period.
     second: Represents the end time (ri) of the same active period.

for (int i = 0; i < n - 1; i++)
Given n active periods [l1, r1], [l2, r2], ..., [ln, rn], there are exactly n - 1 idle periods between them.
*/


