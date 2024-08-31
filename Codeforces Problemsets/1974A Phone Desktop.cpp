#include <iostream>
#include <cmath>
using namespace std;

int main () {
   int t, x, y;
   cin >> t;
   if (1<=t && t<=10000) {
    for (int i=0; i<t; i++) {
        cin >> x >> y;
         if  (0<=x && x<=99 && 0<=y && y<=99) {
            int totalScreensY = ceil(static_cast<double>(y) / 2);
            int totalGridsY = y *4 ;
            int leftGrids = (totalScreensY * 15) - totalGridsY;
            if (leftGrids>x) {
                cout << totalScreensY << endl;
            } else {
                int extraGridsX= x-leftGrids;
                int extraScreensX = ceil(static_cast<double> (extraGridsX) / 15);
                cout << totalScreensY + extraScreensX << endl;
            }
       }
     }
   }
   return 0;
}
