//https://codeforces.com/contest/102/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
  int sum=0,counter=0;
  cin>>s;

  while(s.length()>1)
  {
   sum=0;
    for(int i=0;i<s.length();i++)
    {
       sum+=(s[i]-'0');
      //  cout<<sum;
      //  cout<<s[i];
    }
    counter+=1;
    s=to_string(sum);
    
   
  }
 cout<<counter<<endl;
}
