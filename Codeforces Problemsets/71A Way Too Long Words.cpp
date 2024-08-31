// https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <cstring>

using namespace std;



int main()
{
    int n;
    cin >> n;

    if (1 <= n && n <= 100)
    {
        char word[n][101];

        for (int i = 0; i < n; i++)
        {
            cin >> word[i];               // takes input for each ROW only
        }


        for (int i = 0; i < n; i++)
        {
            int len = strlen(word[i]);
            if (len > 10)
            {
                cout << word[i][0] << len-2 << word[i][len - 1] << endl;
            }
            else
            {
                cout << word[i] << endl;
            }
        }

    }
    else{}

    return 0;
}
