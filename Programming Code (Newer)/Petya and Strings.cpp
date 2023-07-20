//Problem link: https://codeforces.com/contest/112/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int val1=0,val2=0;
string s1,s2,los1,los2;
cin>>s1>>s2;
for(int i=0;i<s1.size();i++)
{
  s1[i]=tolower(s1[i]);
//cout<<los1[i];
  s2[i]=tolower(s2[i]);
  //cout<<los2[i];

}
//cout<<s1<<" "<<s2;
int n=s1.compare(s2);
//cout<<n<<" ";
if(n<0)
{
  cout<<"-1"<<endl;
}
else if(n>0)
{
  cout<<"1"<<endl;
}
else{
  cout<<"0"<<endl;
}

}
