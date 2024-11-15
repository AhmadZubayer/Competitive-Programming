// https://codeforces.com/gym/223338/problem/A
#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(long long n) {
    if (n <= 0) return false;
    double logRes = log2(n); 
    return floor(logRes) == logRes;
}

int main() {
    long long n;
    cin >> n;

    if (isPowerOfTwo(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
