#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int flag,pos;
   long long int x[a];
   long long n;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    cin>>n;
    for(int i=0;i<a;i++)
    {
        if(x[i]==n)
        {
            pos=i;
            flag=1;
           if(x[i]==n)
             break; 
        }
    }
        if(flag==1)
        {
          cout<<pos<<endl;
        
        }
        else
        {
            cout<<"-1"<<endl;
         
        }
    
}