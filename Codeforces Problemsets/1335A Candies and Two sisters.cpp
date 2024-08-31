// https://codeforces.com/contest/1335/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  long long n;
  cin >> t;

  if (1 <= t && t <= 10000) {
    for (int i = 0; i < t; i++) {
      cin >> n;
      cout << (n - 1) / 2 << endl;
    }
  }

  return 0;
}
