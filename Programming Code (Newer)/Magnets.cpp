//Problem link:https://codeforces.com/contest/344/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a,b,c,cal=1;
  cin>>a;
  b=a;
  for(int i=1;i<n;i++)
  {
     cin>>a;
     if(b!=a)
     {
      cal=cal+1;
      b=a;
     }
  }
  cout<<cal<<endl;
}
