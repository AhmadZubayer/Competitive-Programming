// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin >> arr[i]; 
    }

    for(int i=0; i<N; i++) {
        if(arr[i] <= 10) {
           cout << "A[" << i << "] = " << arr[i] << endl; 
        } else {}
    }

    return 0;
}
