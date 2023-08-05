//https://codeforces.com/contest/1856/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
   int n,a;
    int sum=0;
    cin>>n;
    vector< int>vex;
    
    for( int i=0;i<n;i++)
    {
        cin>>a;
        vex.push_back(a);
        
    }

  int ans=0;
for(int i=0;i<n-1;i++)
    {
        if(vex[i]>vex[i+1])
        {
          //  for( int j=0;j<n;j++)
          //  {
            ans=max(ans,vex[i]);
           //cout<<vex[j]<<" ";
           //}
           //cout<<endl;
          //  sum=sum+1;
           
      //i=0;
        }
     
        
        
       
        
    }
    cout<<ans<<endl;
  }
} 
