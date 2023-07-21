
//link:https://codeforces.com/contest/1850/problem/B
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t,n,a,sam,b,c,com=-1;
    
cin>>t;
while(t--)
{
    
  cin>>n;
 
  for(int j=1;j<=n;j++)
  {
    cin>>a>>b;
    
    if(a<=10 and com<b)
    {
        com=b ;
        sam=j;
   //cout<<sam<<" ";
    }
   
  }
  cout<<sam<<endl;
  sam=0;
  com=-1;
 
}
}
