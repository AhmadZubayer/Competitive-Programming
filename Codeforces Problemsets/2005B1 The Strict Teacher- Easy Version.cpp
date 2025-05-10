#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;

        int teacherPos[m];
        for(int i = 0; i < m; i++) {
            cin >> teacherPos[i];
        }

        int davidPos[q];
        for(int i = 0; i < q; i++) {
            cin >> davidPos[i];
        }


        int dist1 = abs(davidPos[0] - teacherPos[0]);
        int dist2 = abs(davidPos[0] - teacherPos[1]);


        cout << min(dist1, dist2) << endl;
    }

    return 0;
}
