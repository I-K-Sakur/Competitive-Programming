#include<bits/stdc++.h>
using namespace std;
int pos=0;
int siz;
int find_middle(int*arr1,int*arr2,int*arr3,int*arr4,int n)
{
   
  int sum1[4000];
  int sum2[4000];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             sum1[pos]=arr1[i]+arr2[j];
             sum2[pos]=arr3[i]+arr4[j];
             //cout<<sum1[pos]<<" ";
            //cout<<sum2[pos];
             pos=pos+1;
             //cout<<arr1[i];
             //cout<<arr2[j];
           
             //cout<<endl;
        }
    }
    int iter=0;
    siz=pos;
    //int siz=sizeof(sum1)/sizeof(sum1[0]);
    //cout<<siz;
    //sort(sum1,sum1+siz);
    //sort(sum2,sum2+siz);
   
    for(int i=0;i<=siz;i++)
    {
        int lo=0;
       int hi=siz;
       //cout<<siz<<endl;
        //cout<<sum1[i]<<" "<<sum2[i]<<endl;
       
         int m1=(hi-lo)/2;
        
        //cout<<sum1[i]<<" "<<sum2[i]<<endl;
       while(hi>lo)
       {
       if(sum2[i]<sum1[m1] )
       {
        hi=m1;
         //cout<<hi<<endl;
       }
       else if(sum2[i]>sum1[m1] )
       {
        lo=m1;
        cout<<lo<<endl;
       }
      
        if (sum2[i]==-sum1[i] || -sum2[i]==sum1[i])
       {
        
        iter=iter+1;
        //cout<<iter<<endl;
        break;
       }
      m1=(hi-lo)/2;
      //cout<<m1<<endl;
    } 
    
    }
    return iter;

}
int main ()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    int ans=find_middle(a,b,c,d,n);
    cout<<ans<<endl;
}