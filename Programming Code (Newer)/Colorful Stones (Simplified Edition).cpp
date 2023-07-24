//https://codeforces.com/contest/265/problem/A
#include<bits/stdc++.h>
using namespace std;

int main() {
string t, s;
int pos=0;
cin>>s>>t;
for(int i=0;i<t.length();i++)
{
    if(t[i]==s[pos])
    {
      pos=pos+1;
    }
    else{
        
        continue;
    }
}
 cout<<pos+1<<endl;
}
