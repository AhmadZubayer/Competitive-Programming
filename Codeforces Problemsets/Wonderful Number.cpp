// https://codeforces.com/gym/223205/problem/C

#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n) {
    if (n % 2 != 0) {
        return true;
    }
    else {
        return false;
    }
}


void checkPalindrome(string binary){
    string revBinary = binary;
    reverse(revBinary.begin(), revBinary.end());
    if (binary == revBinary){
        cout << "YES";
    }
    else{
            cout << "NO";
    }
}

int main() {
    int N;
    cin >> N;
    if (0 <= N && N <= 1000000000) {
        if (isOdd(N)) {
            bitset<32> binaryBitset(N);
            string binary = binaryBitset.to_string();
            binary = binary.substr(binary.find('1'));
            checkPalindrome(binary);
        } else {
            cout << "NO";
        }
    }
    return 0;
}
