#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int pos = -1; 

   
    for(int i = 0; i < N; i++) {
        if(arr[i] == x) {
            pos = i; 
            break;   
        }
    }

    cout << pos << endl; 

    return 0;
}
