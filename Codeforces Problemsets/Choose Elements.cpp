// https://codeforces.com/gym/329103/problem/C

#include <iostream>
using namespace std;

void sum (long long arr[], int K, int N)
{
    for(int i=0; i<N; i++)
    {
        for (int j=0; j<N-1-i; j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    long long sum=0;
    for(int i=0;i<K;i++)
    {
		if(arr[i] < 0){
			break;
		}
		sum += arr[i];
	}
	cout<<sum<<endl;
}


int main()
{
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if (1 <= k && k <= n && n <= 100000)
    {
        for (int i=0; i<n; i++)
{
    if (a[i] < -1000000000 || a[i] > 1000000000)
    {

    }
}
        sum(a, k, n);
    }

    return 0;
}
