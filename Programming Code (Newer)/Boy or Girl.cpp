//Prbolem Link:https://codeforces.com/contest/236/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int n=0;
cin>>s;
unordered_set<char>uch;
for(int i=0;i<s.length();i++)
{
  uch.insert(s[i]);
}
for(int i=0;i<uch.size();i++){
  n=n+1;
}
if(n%2==0)
{
  cout<<"CHAT WITH HER!"<<endl;

}
else{
  cout<<"IGNORE HIM!"<<endl;
}

}
