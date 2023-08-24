//https://codeforces.com/contest/1862/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
  int n,a,val;
  cin>>n;
  vector<int>vex;
 
  for(int i=0;i<n;i++)
  {
   cin>>a;
   vex.push_back(a);
 
   
  }
  vector<int>b={vex[0]};
  for(int i=1;i<n;++i)
  {
   if(b.back()!=1)
   {
    b.push_back(1);
   }
 
    b.push_back(vex[i]);
  
    // val=vex[i-1]-1;
    // if(val>0 && vex[i]>=val)
    // {
    //   q.insert(q.begin()+i,val);
    // }
  }
  cout<<b.size()<<endl;
for(int x:b)
{
  cout<<x<<" ";
}
cout<<endl;
}
}
