// 800
// https://codeforces.com/contest/4/problem/A

#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (1<=w && w<=100){
        if (w%2==0 && w>2){
        cout << "YES";
    }
      else{
        cout << "NO";
      }}
    else{
        cout << "NO";
    }
}
