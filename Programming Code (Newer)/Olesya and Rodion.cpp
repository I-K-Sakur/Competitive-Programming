//https://codeforces.com/contest/584/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,t;
 cin>>a>>t;
 if(t==10)
 {
   if(a==1)
   {
     cout<<"-1"<<endl;
   }
   else{
      for(int i=1;i<a;i++)
      {
        cout<<"1";
      }
      cout<<"0";
   }
 }
 else{
    for(int i=1;i<=a;i++)
    {
      cout<<t;
    }
 }

}
