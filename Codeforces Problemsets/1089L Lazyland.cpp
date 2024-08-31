// https://codeforces.com/problemset/problem/1089/L
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());


    bool duplicates = false;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) {
            duplicates = true;
            cout << 0 << endl;
            break;
        }
    }

    if (!duplicates) {

    }

    return 0;
}
