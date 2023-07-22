//https://codeforces.com/contest/427/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,rec=0,crime=0;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>a;
  if(a>=1)
  {
    rec=rec+a;
  }
  else{
    if(rec>=1)
    {
      rec=rec-1;
    }
    else{
     crime=crime+1;
    }
  }
 
}
 cout<<crime<<endl;
}
