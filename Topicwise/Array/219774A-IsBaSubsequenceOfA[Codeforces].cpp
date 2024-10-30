#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int arrA[a];
    for(int i = 0; i < a; i++) {
        cin >> arrA[i];
    }

    int arrB[b];
    for(int i = 0; i < b; i++) {
        cin >> arrB[i];
    }
    
    int j = 0; 
    for(int i = 0; i < a && j < b; i++) {
        if(arrA[i] == arrB[j]) {
            j++; 
        }
    }

    if(j == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
