//https://codeforces.com/contest/136/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>vex;
    for(int i=0;i<n;i++)
    { 
        cin>>a;
        vex.push_back(a);

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vex[j]==i)
            {
                cout<<j+1<<" ";
            }
        }
    }
}
