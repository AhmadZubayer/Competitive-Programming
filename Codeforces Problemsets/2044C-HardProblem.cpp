#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int seatedA = min(a, m);
        int seatedB = min(b, m);
        int blank1 = m - seatedA;
        int blank2 = m - seatedB;
        int seatedC = min(c, blank1 + blank2);
        cout << (seatedA + seatedB + seatedC) << endl;
    }
    return 0;
}

