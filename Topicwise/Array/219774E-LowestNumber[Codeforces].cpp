// https://codeforces.com/gym/219774/problem/E

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    
    int arr[N];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int minVal = arr[0];
    int pos=1;
    for(int i=0; i<N; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
            pos = i+1;
        }
    }
    cout << minVal << " " << pos << endl;

    return 0;
}