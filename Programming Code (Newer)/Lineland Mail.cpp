//https://codeforces.com/contest/567/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,mn,mx;
  cin>>n;
  vector<int>vex;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    vex.push_back(a);
  }
  for(int i=0;i<n;i++)
  {
    if(i==0 )
    {
        mn=abs(vex[i]-vex[i+1]);
       mx=abs(vex[i]-vex[n-1]);
       cout<<mn<<" "<<mx;
    }
    else if(i==n-1)
    {
         mx=abs(vex[i]-vex[0]);
         mn=abs(vex[i]-vex[i-1]);
         cout<<mn<<" "<<mx;
    }
    else{
        mn=min(abs(vex[i]-vex[i-1]),abs(vex[i]-vex[i+1]));
        mx=max(abs(vex[i]-vex[0]),abs(vex[i]-vex[n-1]));
        cout<<mn<<" "<<mx;
    }
    cout<<endl;
  }
} 
