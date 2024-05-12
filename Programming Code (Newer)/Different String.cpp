//https://codeforces.com/contest/1971/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {

int t;
cin>>t;
while(t--)
{ 
    bool hoise=false;
 string s;
 cin>>s;

for(int i=0;i<s.size()-1;i++)
{
    if(s[i]!=s[i+1])
    {
      swap(s[i],s[i+1]);
      cout<<"YES"<<endl;
      cout<<s<<endl;
      hoise=true;
      break;
    }
   
}
if(hoise==false)
{ 
    cout<<"NO"<<endl;
}

}
}
