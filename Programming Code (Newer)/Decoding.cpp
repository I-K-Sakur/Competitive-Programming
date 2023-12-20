//https://codeforces.com/contest/746/problem/B
#include<bits/stdc++.h>
using namespace std;
 char arr[2000+1];
void right(int n,string st1,bool ri,bool le)
{
   int a;
   int p=n-1;
    for(int i=n-1;i>=0;i-=2)
    {
          arr[p]=st1[i];p--;
   }
      int ite=0;
      for(int i=n-2;i>=0;i-=2)
      {
         arr[ite]=st1[i];ite++;
        
      }  
}
int main()
{
   bool ri=true,le=false;
   int n;
   cin>>n;
   string s;
   cin>>s;
   right(n,s,ri,le);
   for(int i=0;i<n;i++)
   {
      cout<<arr[i];
   }
   cout<<endl;
}


