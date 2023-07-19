#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
       a[n]=a[i];
        sum=a[i]+sum;
    }
   cout<<abs(sum)<<endl;
} 