//https://codeforces.com/contest/1858/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b,c,sum;
      cin>>a>>b>>c;
      sum=a+b+c;
     c=c%2;
         if(a+c<=b)
         {
            cout<<"Second"<<endl;
         }
         else{
            cout<<"First"<<endl;
         }
   }
}
