//https://codeforces.com/contest/1872/problem/0

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  float a,b,c,min;
  cin>>a>>b>>c;

  if(a>b)
  {
   min=a-b;
  }
  else{
    min=b-a;
  }
float div;
  div=min/2;
  //cout<<div;
 float val;
  val=div/c;
  //cout<<val;
  int real_val=ceil(val);
  cout<<real_val<<endl;



  }

}
