#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-9;
double pos;
double find_ternary(double t,int n,int *s,int *d)
{
   double mn=1e18;
   double mx=-1e18;
   for(int i=0;i<n;i++)
   {
    double pos=t*s[i]+d[i];

    mx=max(mx,pos);
    mn=min(mn,pos);
   }
    return mx-mn;
}
int main ()
{
  
   int n,k;
   cin>>n>>k;
   int s[100005],d[100005];
   for(int i=0;i<n;i++)

   {
      cin>>s[i]>>d[i];
   }
  
double lo=0,hi=k;
while((hi-lo)>0.0000001)
{
double m1=lo+(hi-lo)/3.0;
double m2=hi-(hi-lo)/3.0;
if(find_ternary(m1,n,s,d)>find_ternary(m2,n,s,d))
{
  lo=m1;
}
else if(find_ternary(m1,n,s,d)<find_ternary(m2,n,s,d))
{
  hi=m2;
}
else{
   lo=m1;
   hi=m2;
}
}
double ans=find_ternary(lo,n,s,d);
  cout<<fixed<<setprecision(6)<<ans<<endl;
  return 0;
}
  
