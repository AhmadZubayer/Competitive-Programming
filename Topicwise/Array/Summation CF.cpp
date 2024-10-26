#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    
        int arr[N];
        long long sum=0; // N can be as large as 10^5,
        for(int i=0; i<N; i++) {
           cin >> arr[i];
           sum += arr[i]; 
        }
     cout << abs(sum) << endl;
    return 0;
    
}