#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string arr[n];
        int count = 0; 

        for (int i = 0; i < n; i++) {
            string temp = s;  
           
            if (temp[i] == '0')
                temp[i] = '1';
            else
                temp[i] = '0';

            arr[i] = temp;
        }

        for (int i = 0; i < n; i++) {
            for (char c : arr[i]) {
                if (c == '1') {
                    count++;
                }
            }
        }

       
        /*
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
        cout << endl;
        */
       
        cout << count << endl;
    }

    return 0;
}
