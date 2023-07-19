#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,l,r,a,m;
   bool flag=false;
    cin>>n;
    cin>>a;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    l=0;
    r=n-1;
    while(l<=r)
    {
        m=l+r/2;
        if(m==a)
        
            flag=true;
            
        
        else if(m<a)
        {
            l=m+1;
        }
        else if(m>a)
        {
            r=m-1;
        }
    }
    if(flag==true )
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

}