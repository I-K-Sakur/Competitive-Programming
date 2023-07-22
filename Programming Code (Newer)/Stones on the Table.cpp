//https://codeforces.com/contest/266/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int co=0;
  int n;
  cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
  
  if(s[i]==s[i+1])
  {  
    co=co+1;
  }
}
cout<<co<<endl;
}
