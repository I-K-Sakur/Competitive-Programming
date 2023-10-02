//https://codeforces.com/problemset/problem/1873/E
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
{
  int n,a;
  long long x;
 long long int lo=0;
 long long hi=2000000007;
 vector<long long int>vex;
 cin>>n>>x;
for(int i=0;i<n;i++)
{
  cin>>a;
  vex.push_back(a);
}
 while(lo<hi)
 {
  long long mid=lo+(hi-lo+1)/2;
  long long tot=0;
  for(int i=0;i<n;i++)
  {
   tot+=max(mid-vex[i],0LL);
  }
   if(tot<=x)
   {
      lo=mid;
   }
   else{
    hi=mid-1;
   }
   
 }
cout<<lo<<endl;
}
}
