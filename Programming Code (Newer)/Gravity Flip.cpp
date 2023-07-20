//Problem Link
//https://codeforces.com/contest/405/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a;
vector<int>vex;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>a;
  vex.push_back(a);
}
sort(vex.begin(),vex.end());
for(int i=0;i<vex.size();i++)
{
  cout<<vex[i]<<" ";
}

}
