// https://codeforces.com/contest/118/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    string removeChars = "aeiouyAEIOUY"; 

    getline(cin, str);
    for (char c : removeChars) {
        str.erase(remove(str.begin(), str.end(), c), str.end());
    }
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (char c : str) {
        cout << "." << c;
    }

    return 0;
}
