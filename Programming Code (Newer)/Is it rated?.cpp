//https://codeforces.com/contest/807/problem/A

#include<bits/stdc++.h>
using namespace std;
int com(int m,int n)
{
  return m>n;
}
int main()
{
  int n,x,y;
  bool un=false,yes=false;
  cin>>n;
  vector<int>a;
  vector<int>b;
  vector<int>s;
  for(int i=0;i<n;i++)
  {
    cin>>x>>y;
    a.push_back(x);
    b.push_back(y);
  } 
  s=a;
sort(s.begin(),s.end(),com);
if(s==a && a==b)
{
  cout<<"maybe"<<endl;
}
else{
  for(int i=0;i<n;i++)
  {
    if(a[i]!=b[i])
    {
      un=false;
  
      cout<<"rated"<<endl;
      break;
    }
    else if(a[i]==b[i])
    {
      un=true;
  
    }
  
  }
  if(un==true)
  {
    cout<<"unrated"<<endl;
  }

}
}
