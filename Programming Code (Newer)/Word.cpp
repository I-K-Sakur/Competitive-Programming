//problem link:https://codeforces.com/contest/59/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,u;
int a=0,b=0;
cin>>s;
for(int i=0;i<s.length();i++)
{
  if((int)s[i]>96)
  {
    a=a+1;

  }
  else{
    b=b+1;
  }
}

if(a>b)
{
  for(int i=0;i<s.length();i++)
  {
  s[i]=tolower(s[i]);
  }
}
else if(a<b)
{
    for(int i=0;i<s.length();i++)
  {
  s[i]=toupper(s[i]);
  }

}
else{
   for(int i=0;i<s.length();i++)
  {
  s[i]=tolower(s[i]);
  }
}
cout<<s<<endl;
}
