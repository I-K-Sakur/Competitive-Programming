#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    long long c;
    char e='=';
    char S='+'||'-' || '*';
    cin>>a>>S>>b>>e>>c;
    if((a+b)==c || (a-b)==c ||(a*b)==c)
    {
        cout<<"Yes"<<endl;
    }
    else if(S=='+')
    {
        cout<<a+b<<endl;

    }
    else if(S=='-')
    {
        cout<<a-b<<endl;
    }
    else if(S=='*')
    {
        cout<<a*b<<endl;
    }
}