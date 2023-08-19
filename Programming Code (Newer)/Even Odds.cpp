//https://codeforces.com/contest/318/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,a,c;
   cin>>n>>a;
  if(n%2==0)
  {
   c=n/2;
  }
  else{
   c=(n+1)/2;
  }
  if(a<=c)
  {
    cout<<(a*2)-1<<endl;
  }
  else{
   cout<<(a-c)*2;
  }
   
}
