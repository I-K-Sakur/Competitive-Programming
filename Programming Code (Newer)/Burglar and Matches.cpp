//https://codeforces.com/contest/16/problem/B
#include<bits/stdc++.h>
using namespace std;
bool com(pair<int,int>x,pair<int,int>y)
{
   return x.second>y.second;
  
}

int main()
{
 int n,m,a,b,sum=0,dum=1;
 cin>>n>>m;
 vector<pair<int,int>>vex;
 for(int i=0;i<m;i++)
 {
   cin>>a>>b;
   vex.push_back({a,b});
 }
 sort(vex.begin(),vex.end(),com);
//  for(int i=0;i<m;i++)
//  {
//   cout<<vex[i].first<<vex[i].second<<endl;
//  }

for(int i=0;i<m;i++)
{
if(n>0)
{
 if(n>=vex[i].first)
 {
   dum=vex[i].first* vex[i].second;
   sum+=dum;
   n=n-vex[i].first;
 }
 else if(n<vex[i].first)
 {
   dum=n* vex[i].second;
   sum+=dum;
   n=n-vex[i].first;
 }
}
 else{
  break;
 }

}
cout<<sum<<endl;

}
