#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {  
        int n;
        cin >> n;
        vector<int> occupied(n + 2, 0); 
        bool isFollowed = true;

        for (int i = 1; i <= n; i++) {
            int seat;
            cin >> seat;
   
            occupied[seat] = 1;

            if (i > 1 && occupied[seat - 1] == 0 && occupied[seat + 1] == 0) {
                isFollowed = false;
            }
        }

        cout << (isFollowed ? "YES" : "NO") << endl;
    }

    return 0;
}
