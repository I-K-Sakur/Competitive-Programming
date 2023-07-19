#include<bits/stdc++.h>
using namespace std;
int a;
int i=a;
int var=0;

/*int max(int arr[],int i)
{
  if(i==1)
  {
    return arr[i-1];
  }
  int ma=max(arr,i-1)
  if(ma>arr[i-1])
  {
  return ma;
  }
  else{
    return arr[i-1];
  }
   
}*/
int main ()
{
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    //cout<<max(arr,i,a);
    cout<<arr[a-1];
}
