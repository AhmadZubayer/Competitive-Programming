// https://codeforces.com/contest/1985/problem/A

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << s2.substr(0,1) +  s1.substr(1) << " " << s1.substr(0,1) + s2.substr(1) << endl;
    }

    return 0;
}