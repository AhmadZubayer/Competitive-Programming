// https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int length = s.size(); 

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 2 - i; j++) {
            if (s[j] > s[j + 2]) {
                swap(s[j], s[j + 2]); 
            }
        }
    }

    cout << s << endl;

    return 0;
}
