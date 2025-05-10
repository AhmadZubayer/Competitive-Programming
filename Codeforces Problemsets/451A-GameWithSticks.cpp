// https://codeforces.com/problemset/problem/451/A

#include <iostream>
using namespace std;

int count = 0;

int countTurns(int n, int m) {
    if (n > 0 && m > 0) {    
        n--;
        m--;
        count++;
        return countTurns(n, m);  
    } else {
        return count;
    }
}

int main() {
    
        int n, m;
        cin >> n >> m;
        count = 0;  
        int turns = countTurns(n, m);
        if (turns % 2 == 1) {
            cout << "Akshat" << endl;  
        } else {
            cout << "Malvika" << endl;
        }
    
    return 0;
}

