#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    if ( 1<= N && N<=100000)  {
        int arr[N];
        long long sum=0; // N can be as large as 10^5,
        for(int i=0; i<N; i++) {
           cin >> arr[i];
           sum += arr[i]; 
        }
     cout << abs(sum) << endl;
    }
    
}