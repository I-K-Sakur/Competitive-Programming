//https://codeforces.com/contest/1907/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(string st){

   char arr[40]={"abcdefgh"};
for(int i=0;i<8;i++)
{
  if(st[0]!=arr[i])
  {
    cout<<arr[i]<<st[1]<<endl;
  }
}
for(int i=1;i<=8;i++)
{
    if(st[1]-'0'!=i)
    {
        cout<<st[0]<<i<<endl;
    }
}

}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     string s;
     cin>>s;
     solve(s);
   }
}
