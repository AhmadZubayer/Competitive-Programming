// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<N; i++) {
        if (arr[i] > 0) {
            cout << 1;
        } else if (arr[i] < 0) {
            cout << 2;
        } else {
            cout << 0;
        }

        if (i < N - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
} 