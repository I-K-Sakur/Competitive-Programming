//https://codeforces.com/contest/469/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,x,y,p,q;
 bool flag=false;
 cin>>n;
 set<int>s;
 cin>>x;
 for(int i=0;i<x;i++)
 {
   cin>>p;
   s.insert(p);
 }
 cin>>y;
 for(int i=0;i<y;i++)
 {
  cin>>q;
  s.insert(q);
 }
 if(s.size()==n)
 {
  cout<<"I become the guy."<<endl;
 }
 else{
  cout<<"Oh, my keyboard!"<<endl;
 }
}
