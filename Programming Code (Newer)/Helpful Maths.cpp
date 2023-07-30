//https://codeforces.com/contest/339/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
  string s,s1;
  cin>>s;
  sort(s.begin(),s.end());
 for(int i=0;i<=s.size();i++)
 {
    if(s[i]=='+')
    {
        continue;
    }
    else{
     s1[a]=s[i];
     a=a+1;
    }
 }
 for(int i=0;i<=a-2;i++)
 {
   if(i<(a-2))
   {
      cout<<s1[i]<<'+';
   }
   else{
    cout<<s1[i];

 }
}
}
