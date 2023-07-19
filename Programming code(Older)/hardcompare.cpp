#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int f=pow(a,b);
    long long int g=pow(c,d);
    if(1<=a && c<=10^7 && 1<=b && d<=10^12)
    {
    if(f>g)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}