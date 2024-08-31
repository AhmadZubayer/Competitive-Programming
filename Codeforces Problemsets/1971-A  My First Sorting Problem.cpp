#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin >> t;
    if (1 <= t && t <= 100) {
        int arr[t][2];
        for (int i = 0; i < t; i++) {
            cin >> x >> y;
            arr[i][0] = x;
            arr[i][1] = y;

        }
        for (int i = 0; i < t; i++) {
            x = arr[i][0];
            y = arr[i][1];
            if (0 <= x && x <= 9 && 0 <= y && y <= 9) {
                if (x > y) {
                    cout << y << " " << x << endl;
                } else {
                    cout << x << " " << y << endl;
                }
            }
        }
    }
    return 0;
}
