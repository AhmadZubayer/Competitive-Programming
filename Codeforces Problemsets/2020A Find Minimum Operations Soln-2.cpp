// https://codeforces.com/problemset/problem/2020/A
// Soln- 01 TIME LIMIT EXCEEDED
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;

        // Find the highest power of k that is less than or equal to n
        int power = 0;
        while (pow(k, power) <= n) {
            power++;
        }
        power--;

        // Calculate the remainder of n divided by k^power
        int remainder = n % pow(k, power);

        // If the remainder is 0, then n is already divisible
        if (remainder == 0) {
            cout << 0 << endl;
        } else {
            // Otherwise, add the missing part to make it divisible
            cout << pow(k, power) - remainder << endl;
        }
    }

    return 0;
}