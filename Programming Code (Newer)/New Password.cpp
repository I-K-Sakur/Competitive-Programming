//https://codeforces.com/contest/770/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,k,x=97;
 char a;
 cin>>n>>k;
 vector<char>vex;
 for(int i=0;i<k;i++)
 {
     a=x+i;
   //  cout<<a;
   vex.push_back(a);
 }
 int def=n-vex.size();
 for(int i=n;i<n+def;i++)
 {
    a=vex[i-(n)];
    vex.push_back(a);
 }
 for(int i=0;i<vex.size();i++)
 {
  cout<<vex[i];
 }
}
