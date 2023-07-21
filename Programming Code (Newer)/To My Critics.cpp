//link:https://codeforces.com/contest/1850/problem/A
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b>=10)
        {
        cout<<"YES"<<endl;
        }
        else if(a+c>=10)
        {
        cout<<"YES"<<endl;
        }
        else if(b+c>=10)
        {
         cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
