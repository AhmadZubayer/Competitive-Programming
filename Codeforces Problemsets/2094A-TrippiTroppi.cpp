#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    cin.ignore(); 
 
    while (t--) {
        string s;
        getline(cin, s); 
 
        cout << s[0]; 
        for (size_t i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && i + 1 < s.length()) {
                cout << s[i + 1]; 
            }
        }
        cout << endl;
    }
 
    return 0;
}