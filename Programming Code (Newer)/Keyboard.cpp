//https://codeforces.com/contest/474/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
char r;
cin>>r;
string n;
cin>>n;
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
string w,t;

for(int i=0;i<n.size();i++)
{
  int in=s.find(n[i]);
  if(r=='R')
  {
    
    
       cout<<s[in-1];
     
  }
else
  {
    
     
       cout<<s[in+1];
     
  }
}



}
