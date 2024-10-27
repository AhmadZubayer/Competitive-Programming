// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    for(int i=N-1; i>=0; i--) {
        cout << arr[i];
        if (i > 0) {
            cout << " ";
        }

    }

    return 0;
}