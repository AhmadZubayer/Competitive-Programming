#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    int num; 
    cin >> num;

    int sum = 0;
    int rem;

    while (num > 0) {
        rem = num % 10;
        sum += rem;
        num /= 10; 
    }

    cout << sum << endl;  
    return 0;
}