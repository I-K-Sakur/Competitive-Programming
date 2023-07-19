#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,w,sum=0,c=0,flag=0;
   cin>>n>>w;
   int arr[n];
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=i;j<=i+3;j++)
   {
       if(arr[j]>w)
       {
           c=0;
           break;
       }
       
       else if(arr[j]<=w || sum<=w)
       {
           sum=sum+arr[j];
           c=c+1;
       }
       
       
   }
   }
    
       cout<<c<<endl;
   
}
