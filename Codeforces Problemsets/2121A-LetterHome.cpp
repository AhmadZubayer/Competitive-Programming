#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        int* x = new int[n]; 
        for(int i = 0; i<n; i++) {
            cin >> x[i];
        }
        int min = *min_element(x, x+n);
        int max = *max_element(x, x+n);
        int steps;
        if(n == 1) {
            steps = s - x[0];
        } else {
            if( s >= max ) {
                steps = s - min;
            } else if( min >= s) {
                steps = max - s;
            } else {
                if((max - s) >= (s-min)) {
                    steps = (s - min) + (max - min);
                } else {
                    steps = (max-s) + (max - min);
                }
            }      
        }
        
        
        cout << abs(steps) << endl;

        delete[] x;       
    }
}

