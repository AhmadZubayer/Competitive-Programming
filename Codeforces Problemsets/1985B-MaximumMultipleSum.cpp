// https://codeforces.com/contest/1985/problem/B

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int num;
        cin >> num;
        if (num == 3) {
            cout << 3 << endl; 
        } else {
            cout << 2 << endl;
        }

    }

    return 0;
}

/*
  for many values of n, x=2 provides the highest sum, as smaller values of x tend to have more multiples within the range, resulting in higher sums.
  the only exception is 3
*/