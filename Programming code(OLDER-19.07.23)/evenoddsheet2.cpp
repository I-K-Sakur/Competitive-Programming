#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
  int e=0,o=0,j=0,p=0;
 long long x[n];
 for(int i=1;i<=n;i++)
   {
     cin>>x[i];
   } 
   for(int i=1;i<=n;i++)
   {
     if(x[i]%2==0 ||x[i]==0)
     {
       
         e=e+1;
        
       
     }
     else if(!(x[i]%2==0 || x[i]==0))
       {
         if(i!=0)
         {
           o=o+1;
         }
       }
   
 
        if(x[i]<0)
         {
           if(i!=0)
           {
              j=j+1;
           }
         }
         else if(x[i]>0)
           {
             if(i!=0)
             {
               p=p+1;
             }
           }
   }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<j<<endl;
   
}