// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int found=0;
    int pos;
    for(int i=0; i<N; i++) {
        if(arr[i] == x) {
            found++;
            pos = i;
            break;
        }
    }
    if (found > 0) {
        cout << pos << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}