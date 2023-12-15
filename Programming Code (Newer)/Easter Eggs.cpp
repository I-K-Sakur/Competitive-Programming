//https://codeforces.com/contest/78/problem/B
#include<bits/stdc++.h>
using namespace std;

void solve(int num)
{
  string s;
  s="ROYGBIV";
  for(int i=7;i<num;i++)
  {
    s.push_back(s[i-4]);
  }
 cout<<s<<endl;
}
int main()
{
   int n;
   cin>>n;
   solve(n);
}
