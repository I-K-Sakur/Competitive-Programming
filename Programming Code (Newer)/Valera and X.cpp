//https://codeforces.com/contest/404/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 char c;
 vector<char>s1;
 vector<char>s2;
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=n;j++)
  {
    cin>>c;

    if(j==i || i==n-j+1)
    {
        s1.push_back(c);
    }
    else{
     s2.push_back(c);
    }
  }
 }
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
 auto uniq=unique(s1.begin(),s1.end());
 s1.erase(uniq,s1.end());
auto ando=unique(s2.begin(),s2.end());
s2.erase(ando,s2.end());
// for(int i=0;i<s1.size();i++)
// {
//   cout<<s1[i]<<s2[i];
// }
if(s1.size()!=1 || s2.size()!=1 || s2[1]==s1[1])
 {
  cout<<"NO"<<endl;
 }
 else{
  cout<<"YES"<<endl;
 }
}
