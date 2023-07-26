//https://codeforces.com/contest/9/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,sum=0;
cin>>a>>b;
int val=6,c;
int ma=max(a,b);

for( int i=ma;i<=6;i++)
{
   sum=sum+1;
}

if(sum==0)
{
  sum=0;
  val=1;
}
else if(sum==2)
{
   sum=sum/2;
   val=val/2;
}
else if(sum==3)
{
  sum=sum/3;
  val=val/3;
}
else if(sum==4)
{
  sum=sum/2;
  val=val/2;
}
else if(sum==6)
{
 sum=sum/6;
 val=val/6;
}
cout<<sum<<"/"<<val;
}
