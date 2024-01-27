//https://codeforces.com/contest/1925/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,a,b,cnt=0;
     char c;
     cin>>t;
     while(t--)
     {
     vector<pair<int,int>>v;
     vector<char>charvec;
        
         cin>>a>>b;
         cnt=97+b;
         //v.push_back({a,b});
        for(int j=1;j<=a;j++)
        {
         for(int i=97;i<cnt;i++)
         {
            c=char(i);
          charvec.push_back(c);
         }

        }
     
     for(int i=0;i<charvec.size();i++)
     {
        cout<<charvec[i];
     }
     cout<<endl;
   }
}
