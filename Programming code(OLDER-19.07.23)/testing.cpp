#include<bits/stdc++.h>
using namespace std;
//int ma=300000;
const int N=4e5+10;
int arr[N+5];
vector<long long int>vex(N);

void sieve(long long int n)
{
    arr[0]=1;
    arr[1]=1;
   for(long long int i=2;i*i<=n;i++)
   {
    if (arr[i]==0)
    {
        vex.push_back(i);
      
      for(int j=2*i;j<=n;j=j+i)
      {
        arr[j]=1;
      }
    }
  } 
}
// int ret(long long int n,long long int m)
// {
//   for(long long int i=0;i<=vex.size();i++)
//   {
//     if(vex[i]>m) break;
//     else if(vex[i]>=n){
//         h=h+1;
//         //cout<<vex[i];
//     }
//   }
//   return h;
// }
int main()
{
  sieve(N);
  long long h=0;
   long long int t,n,m;
    cin>>t;
    while(t--)
    {
      
        cin>>n>>m;
   // cout<<ret(n,m)<<endl;
      for(long long int i=0;i<=vex.size();i++)
  {
    
    if(vex[i]>m) break;
    else if(vex[i]>=n){
        h=h+1;
       
        //cout<<vex[i];
        //cout<<h<<" ";
    }
    //else continue;

    //cout<<vex[i]<<" ";
  
  
  }
  cout<<h<<endl;
    h=0;
     
    
   
}
}
