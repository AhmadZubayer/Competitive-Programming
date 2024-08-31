#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    string n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;


        if (n.length() > 3 && n.at(0) == '1' && n.at(1) == '0' && n.at(2) != '0') {
            cout << "YES" << endl;
        } else if (n.length() == 3 && n.at(0) == '1' && n.at(1) == '0' && n.at(2) > '1') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}



