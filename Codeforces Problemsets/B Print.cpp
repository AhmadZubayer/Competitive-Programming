// https://codeforces.com/gym/223205/problem/B

#include <iostream>
using namespace std;

int printNum(int n){
  for (int i=1; i<n; i++)
   {
       cout << i << " ";
   }
   cout << n;
}
int main () {

   int N;
   cin >> N;
   if (1<=N && N<=1000){
    printNum(N);
   }
   return 0;


}
