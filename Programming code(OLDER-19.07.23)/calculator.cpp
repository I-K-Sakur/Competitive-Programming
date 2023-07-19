#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int A,B;
 char S='+'||'-' || '*' || '/';
 cin>>A>>S>>B;

    while(S=='+')
    {
    cout<<A+B<<endl;
    return 0;
    }
    while(S=='-')
    {
        cout<<A-B<<endl;
        return 0;
    }
    while(S=='*')
    {
        cout<<A*B<<endl;
        return 0;
    }
    while(S=='/')
    {
        cout<<A/B<<endl;
        return 0;
    }
}
