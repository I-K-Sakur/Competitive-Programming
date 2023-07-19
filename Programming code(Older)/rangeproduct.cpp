#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    long long p=1;
    if(-10^9<=a && a<=b && b<=10^9)
    {
    for(int i=a;i<=b;i++)
    {
      p=p*i;
    }
      if(p>0)
    {
        cout<<"Positive"<<endl;
    }
    else if(p<0)
    {
        cout<<"Negative"<<endl;
    }
    else if(p==0)
    {
        cout<<"Zero"<<endl;
    }
    }
}