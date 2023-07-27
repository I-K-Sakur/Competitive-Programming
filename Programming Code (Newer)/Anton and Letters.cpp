//https://codeforces.com/contest/443/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
set<char>st;
getline(cin,s);
for(const auto& ch:s)
{
    if((int)ch>=65 and (int)ch<=90 || (int)ch>=97 and (int)ch<=122)
    {
      st.insert(ch);
    }
    
}
cout<<st.size()<<endl;
}
