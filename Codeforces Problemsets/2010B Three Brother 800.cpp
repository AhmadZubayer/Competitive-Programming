#include <iostream>
using namespace std;

int main() {
    int brosArrived[2];
    for(int i=0; i<2; i++) {
        cin >> brosArrived[i];
    }
    int sum=0;
    for(int i=0; i<2; i++) {
        sum+=brosArrived[i];
    }
    cout << 6 - sum << endl; // 1+2+3 = 6

    return 0;

}
