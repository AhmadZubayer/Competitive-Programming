#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

bool check(char a[], int n) {
    char first_char = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] != first_char) {
            return false;
        }
    }
    return true;
}


void rearranged_string (char a[], int n)
{
    char b[n];
    for (int i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int j = rand() % n;
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    bool is_idenitical = true;
    for (int i=0; i<n; i++)
    {
        if (b[i]!=a[i])
        {
            is_idenitical=false;
            break;
        }
    }

    if (!is_idenitical)
    {
       for (int i = 0; i < n; i++)
      {
         cout << a[i];
      }
       cout << endl;
    }
    else
    {
         for (int i=0; i<n-1; i++)
        {
            char temp= a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        for (int i = 0; i < n; i++)
      {
         cout << a[i];
      }
       cout << endl;

    }
}

int main ()
{
   int t;
   cin >> t;
   char arr[t][11];
   if (1<=t && t<=1000)
   {

       for (int i=0; i<t; i++)
       {
               cin >> arr[i];
       }
   }
   int length;
   for (int i=0; i<t; i++)
   {
       length= strlen(arr[i]);
       if (length == 1)
       {
           cout << "NO" << endl;
       }
       else if (check(arr[i], length))
       {
           cout << "NO" << endl;
       }
       else
       {
           cout << "YES" << endl;
           rearranged_string(arr[i], length);
       }
   }


   return 0;
}
