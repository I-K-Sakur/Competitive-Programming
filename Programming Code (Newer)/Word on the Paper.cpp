//link:https://codeforces.com/contest/1850/problem/C
#include<bits/stdc++.h>
using namespace std;
int  main()
{
int n;
char a,b;
vector<char>vex;
cin>>n;
while(n--)
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a;
            if(a!='.' )
            {
                cout<<a;
            }
            // if(b!='.')
            // {
            //     cout<<b;
            // }
        }
      
    }
    cout<<endl;
    
}
}
