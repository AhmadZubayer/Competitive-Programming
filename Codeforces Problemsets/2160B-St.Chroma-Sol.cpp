#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

int findMaxMEX(int arr[], int n) {
    int mexArr[n];
    bool isPresent[n + 1] = {false}; 
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= n) {
            isPresent[arr[i]] = true;
        }
    }
    
    for (int i = 0; i <= n; i++) {
        if (!isPresent[i]) {
            mexArr[i] = i;
        } else {
            mexArr[i] = n+1;
        }
    }

    return  *max_element(mexArr, mexArr + n); 
}





void findMaxPermuation (int n, int x){
    int arr[n];
    for(int i=0; i<n; i++) {
        arr[i] = i;
    }

    if((n-x) == 0) {
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        random_device rd;
        mt19937 g(rd());
        do {
            shuffle(arr, arr + n, g);

        } while (findMaxMEX(arr, n) == x);

        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
    }
    

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        findMaxPermuation(n,x);       
    }
}