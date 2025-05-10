#include <iostream>
using namespace std;
 
int main() {
    int t, n, m, l, r;
    cin >> t;
    while (t--) {
        cin >> n >> m >> l >> r;
    
        int lp = max(l, -m); 
        int rp = lp + m;
        if (rp > r) {
            rp = r;
            lp = rp - m;
        }
        cout << lp << " " << rp << endl;
    }
    return 0;
}