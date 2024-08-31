//https://codeforces.com/gym/326175/problem/A

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double X, P, I;
    cin >> X >> P;
    if (1<=X<=99 && 1<=P<=40000)
    {
        I= P/(1- (X/100));
        cout << fixed << setprecision(2)<< I;
    }
    else{}

    return 0;
}
