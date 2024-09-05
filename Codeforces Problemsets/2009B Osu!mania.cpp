// https://codeforces.com/contest/2009/problem/B
// Submission: https://codeforces.com/submissions/zubayer007#

#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        char beatmap[n][4];


        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                cin >> beatmap[j][k];
            }
        }

        int arr[n];
        int index = 0;


        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                if (beatmap[j][k] == '#') {
                    arr[index] = k+1;
                    index++;
                }
            }
        }


        for (int c = index - 1; c >= 0; c--) {
            cout << arr[c] << " ";
        }
        cout << endl;
    }

    return 0;
}
