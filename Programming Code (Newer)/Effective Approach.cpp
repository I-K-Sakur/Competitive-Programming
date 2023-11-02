//https://codeforces.com/contest/227/problem/B
#include<bits/stdc++.h>
using namespace std;
const int N = int(1e5 + 3);
int main()
{
    int n;
    cin>>n ;
    int arr[N];
    int arr2[N];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]=i+1;
        
    }
    int b,c;
    long long int sum1=0,sum2=0;
    cin>>b;
    for(int j=0;j<b;j++)
    {
        cin>>c;
      sum1+=arr[c];
      sum2+=n-arr[c]+1;

    }
    cout<<sum1<<" "<<sum2<<endl;
}
