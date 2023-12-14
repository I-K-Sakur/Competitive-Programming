//https://codeforces.com/contest/1902/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  bool infinity=false;
  bool emni=true;
while(t--)
{
 int n;
 cin>>n;
 int a=0;
 string s;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
   if(s[i]=='1')
   {
     a+=1;
   }
   
 }
 if(a<n)
 {
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
 
}
}
