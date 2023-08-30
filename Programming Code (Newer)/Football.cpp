//https://codeforces.com/contest/43/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
  string a,b;
  int f=0,s=0;
  cin>>n;
 vector<string>vex;


 for(int i=0;i<n;i++)
 {
   cin>>a;
   vex.push_back(a);
  
   
 }
 for(int i=0;i<n;i++)
 {
  if(vex[i]!=vex[0])
  {
    s=s+1;
    b=vex[i];
  }
  else{
    f=f+1;
  }
 }
 if(f>s)
 {
  cout<<vex[0]<<endl;
 }
 else{
  cout<<b<<endl;
 }
}
