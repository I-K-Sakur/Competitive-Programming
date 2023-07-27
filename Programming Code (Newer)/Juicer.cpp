//https://codeforces.com/contest/709/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,b,d,a,waste=0,sum=0;
  cin>>n>>b>>d;
  vector<int>vex;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    vex.push_back(a);
  }
  for(int i=0;i<n;i++)
  {
    if(vex[i]<=b)
    {
        waste=waste+vex[i];
        if(waste>d)
        {
            sum=1+sum;
            waste=0;
        }
    }
  }
  cout<<sum<<endl;

}
