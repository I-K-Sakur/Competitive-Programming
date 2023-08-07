//https://codeforces.com/contest/1857/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,a,sume=0,sumo=0;
    cin>>n;
    vector<int>vex;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      vex.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
      if(vex[i]%2==0)
      {
          sume=sume+vex[i];
      }
      else{
        sumo=sumo+vex[i];
      }
    }
    if(sumo%2==0 && sume%2==0)
    {
      cout<<"YES"<<endl;
    }
    else if(sumo%2!=0 && sume%2!=0)
    {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
} 
