//https://codeforces.com/contest/490/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>vex;
    vector<int>x;
        vector<int>y;
    vector<int>z;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        vex.push_back(a);
    }
    if(n<3)
    {
      cout<<"0"<<endl;
    }
    else{
    for(int i=0;i<n;i++)
    {
        if(vex[i]==1)
        {
           x.push_back(i+1);
        }
        else if(vex[i]==2)
        {
           y.push_back(i+1);
        }
         else
        {
           z.push_back(i+1);
        }
        
    }
     if(x.size()==0||y.size()==0||z.size()==0)
     {
      cout<<"0"<<endl;
     }
     else{
      int g=min({x.size(),y.size(),z.size()});
      cout<<g<<endl;
      for(int i=0;i<g;i++)
      {
         cout<<x[i]<<" "<<y[i]<<" "<<z[i];
         cout<<endl;
      }
     }

    }
}
