//https://codeforces.com/contest/686/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    long long d,a,sum,depressed=0;
    char c;
    cin>>n>>d;
sum=d;
  vector<pair<char,long long int>>vex;
  for(int i=0;i<n;i++)
  {
     cin>>c>>a;
     vex.push_back({c,a});
  }
  
  for(int i=0;i<n;i++)
  {
    if(vex[i].first=='-')
    {
        if(sum>=vex[i].second)
        {
         sum=sum-vex[i].second;
        }
        else{
            depressed=depressed+1;
            continue;
        }
    }
    else {
        sum=sum+vex[i].second;
    }
    if(sum>=0)
    {
        continue;
    }
    else{
        depressed=depressed+1;
    }
    // cout<<vex[i].first<<" "<<vex[i].second<<endl;
  }
cout<<sum<<" "<<depressed<<endl;

}
