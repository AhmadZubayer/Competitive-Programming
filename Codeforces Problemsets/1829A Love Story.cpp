#include <iostream>
using namespace std;
int main(){
    int t;
    char defaultString[10]= {'c','o','d','e','f','o','r','c','e','s'};
    char inputString[10];
    cin >> t;
    if (1<=t && t<=1000){
        for (int i=0; i<t; i++) {
        for (int j=0; j<10; j++) {
             cin >> inputString[j];
        }
        int counter=0;
        for (int k=0; k<10; k++){
            if ( inputString[k]!= defaultString[k]) {
            counter ++;
        }
       }
       cout << counter << endl;
      }
   } 
   return 0;
 }
   