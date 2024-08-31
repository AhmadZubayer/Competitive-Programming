// https://codeforces.com/problemset/problem/1969/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, p;
    cin >> t;

    if (1 <= t && t <= 5000) {
        int arrT[t];
        int arrN[t][50];

        for (int i = 0; i < t; i++) {
            cin >> n;
            arrT[i] = n;

            if (n>=2){
            for (int j = 0; j < n; j++) {
                arrN[i][j]=p;
                cin >> p ;
            }
          }
        }
    }

    for (int i=0; i<t; i++){

    }
}
