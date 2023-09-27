//https://codeforces.com/problemset/problem/1879/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
  int n,a,b;

  cin>>n;
     vector<long long int> vex(n);
        vector<long long int> dup(n);
for(auto& a:vex) cin>>a;
for(auto& b:dup) cin>>b;
long long int f=*min_element(vex.begin(),vex.end());
long long int s=*min_element(dup.begin(),dup.end());
long long int sum1=accumulate(vex.begin(),vex.end(),0LL);
long long int sum2=accumulate(dup.begin(),dup.end(),0LL );



//   int f=*min_element(vex.begin(),vex.end());
//   int s=*min_element(dup.begin(),dup.end());
long long int ans=min(f*n+sum2,s*n+sum1);
cout<<ans<<endl;
//  int minu=min(sum1,sum2);
//   cout<<minu<<endl;
}
}
