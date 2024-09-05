// https://codeforces.com/contest/2009/problem/A
// Submission: https://codeforces.com/submissions/zubayer007#

#include<iostream>
using namespace std;

int main() {

    int t, a, b, c;
    cin >> t;
    
    for(int i=0; i<t; i++) {
        cin >> a >> b;
        c=a;
        if (a==b) {
            cout << 0 << endl;
        } else {
            cout << (c-a) + (b-c) << endl;
        }
    }

 return 0;
}
