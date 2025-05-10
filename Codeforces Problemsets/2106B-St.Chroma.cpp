#include <iostream>
using namespace std;

void findMaxPermutation(int n, int x) {
    int arr[n];

    if (x == 0) {
        for (int i = n - 1; i >= 0; --i) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    if (x == n) {
        for (int i = 0; i < n; ++i) {
            cout << i << " ";
        }
        cout << endl;
        return;
    } else {  
        /*
        Start from 0 to x-1
        then, x+1 to n-1
        finally, put x
        */
       
        int index = 0;
        
        for (int i = 0; i < x; i++) {
            arr[index++] = i;
        }

        for (int i = n - 1; i >= x; i--) {
            if (i != x) {
                arr[index++] = i;
            }
        }

        if (x < n) {
            arr[index++] = x;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        findMaxPermutation(n, x);
    }
    return 0;
}
