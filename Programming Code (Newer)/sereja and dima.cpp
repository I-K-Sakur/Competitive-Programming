//https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b=1,s=0,d=0;
deque<int>vex;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>a;
  vex.push_back(a);
}

while(!vex.empty())
{
  if(b%2==0)
  {
    if(vex.front()>vex.back())
    {
      d=d+vex.front();
      vex.pop_front();
      b=b+1;
    }
    else{
       d=d+vex.back();
       vex.pop_back();
       b=b+1;
    }
  }
  else{
     if(vex.front()>vex.back())
    {
      s=s+vex.front();
      //cout<<vex.front()<<" ";
      //cout<<s<<" ";
      vex.pop_front();
      b=b+1;
    }
    else{
       s=s+vex.back();
       //cout<<vex.back()<<" ";
      //cout<<s<<" ";
       vex.pop_back();
       b=b+1;
    }
  }
  //cout<<endl;
}
cout<<s<<" "<<d<<endl;
}
