// https://codeforces.com/gym/326175/problem/B

#include<iostream>
using namespace std;
int main()
{
    long long a,b,k;
    cin >> a >> b >> k;
    if (1<=a<=1000000000000000000 && 1<=b<=1000000000000000000 && 1<=k<=1000000000000000000 )
    {
        if (a%k==0 && b%k==0)
        {
            cout << "Both";
        }
        else if (a%k==0 && b%k!=0)
        {
            cout << "Memo";
        }
        else if (a%k!=0 && b%k==0)
        {
            cout << "Momo";
        }
        else if (a%k!=0 && b%k!=0)
        {
            cout << "No One";
        }
    }
    else{}
}
