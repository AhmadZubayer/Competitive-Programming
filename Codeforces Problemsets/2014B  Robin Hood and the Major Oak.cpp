// https://codeforces.com/contest/2014/problem/B
// RUN TIME ERROR
// Submission link: https://codeforces.com/contest/2014/submission/285955326

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

       
        if (k > n) {
            cout << "NO" << endl; 
            continue; 
        }

        vector<int> vec(n);
        for (int p = 0; p < n; p++) {
            vec[p] = n - p;
        }

        int numOfLeaves = 0;
        for (int q = 0; q < k; q++) {
            numOfLeaves += vec[q];
        }

        if (numOfLeaves % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}