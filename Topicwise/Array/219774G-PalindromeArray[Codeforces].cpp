// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    
    int arr[N];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i=0; i<N/2; i++) {
        if (arr[i] != arr[N-i-1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}