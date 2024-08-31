//https://codeforces.com/contest/1283/problem/A

#include <iostream>
using namespace std;

int main()
{
    int t, h, m;
    cin >> t;
    int arr[t];
       for (int i = 0; i < t; i++)
        {
            cin >> h >> m;

            if (1 <= t && t <= 1439)
            {
                if (h >= 0 && h < 24 && m >= 0 && m < 60 )
            {
                  if ((h==0 && m==0)){}
                  else {
                  arr[i] = (23 - h) * 60 + (60 - m);
                  }
            }
            }

        }

        for (int i=0; i<t; i++)
        {
            cout << arr[i] << endl;
        }


    return 0;
}
