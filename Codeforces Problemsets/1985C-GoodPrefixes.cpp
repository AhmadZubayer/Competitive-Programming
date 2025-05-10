#include <iostream>
using namespace std;

int goodPrefix(int arr[], int n) {
    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {    
            sum += arr[j];
        }
        for(int j=0; j<=i; j++) {
            if(arr[j] == sum - arr[j]) {
                count++;
            }
        }  
              
        }

    return count;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        cout << goodPrefix(arr, n) << endl;
    }

    return 0;
}
