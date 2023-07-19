#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int coun=0;
        int zero=0;
        int k=0;
        cin>>n;
        int a;
        int arr[100];
        for(int i=0;i<n;i++)
        {
            cin>>a; 
            if(a==0 and i==0)
            {
                coun=coun+1;
                //cout<<coun;
                arr[0]=coun;
                //cout<<coun;
                //cout<<arr[k];
                //k=k+1;
            }
            else if(a==0)
            {
                coun=coun+1;
                arr[i]=coun;
            }
            else if(a==1 and i==0)
            {
                arr[0]=0;
                coun=0;
                //cout<<coun;
                //cout<<arr[k];
                //k=k+1;
              
            }
            else if(a==1)
            {
                k=k+1;
              arr[k]=0;
              coun=0;
              //cout<<coun;
              //cout<<arr[k+1];
             
            }
  
        }
       // cout<<arr[1]<<" ";
        for(int i=0;i<k;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
   }
}
