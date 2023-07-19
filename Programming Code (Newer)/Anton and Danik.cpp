//Problem Link:
//https://codeforces.com/contest/734/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a=0,c=0,f=0;
    cin>>n;

string s;
cin>>s;
for(int i=0;i<n;i++)
{
  if(s[i]=='A')
  {
    a=a+1;
    //cout<<a;
  }
  else
  {
    c=c+1;
   //cout<<c;
  }

}
if(c>a)
{
    cout<<"Danik"<<endl;
}
else if(a>c)
{
    cout<<"Anton"<<endl;
}
else if(a==c){
    cout<<"Friendship"<<endl;
}
}
