// https://codeforces.com/contest/2112/problem/A

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, x, y;
        cin >> a >> x >> y;
        if(abs(x-y) < max(abs(a-x), abs(a-y))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
