//https://codeforces.com/problemset/problem/767/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    bool arr[n];
    int pin =n;
    memset(arr,false,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a]=true;
        if(a==pin)
        {
        while(arr[a])
        {
       cout<<a<<" ";
       a--;
          pin--;
        }
          }
          cout<<endl;
    }

}
