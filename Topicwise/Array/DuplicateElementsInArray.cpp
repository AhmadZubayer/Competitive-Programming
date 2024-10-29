#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int count = 0;   
    bool hasDuplicate = false;

    cout << "Duplicates: ";
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            if (!hasDuplicate) {
                cout << arr[i] << " ";  
                count++;       
                hasDuplicate = true;    
            }
        } else {
            hasDuplicate = false;  
        }
    }

    cout << endl;
    cout << "Count of unique elements with duplicates: " << count << endl;

    return 0;
}
