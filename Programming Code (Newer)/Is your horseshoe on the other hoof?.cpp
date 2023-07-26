//https://codeforces.com/contest/228/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,a ;
    vector<int>vex;
    set<int>s;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vex.push_back(a);
        s.insert(a);
    }
    // for( it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    //cout<<s.size();
 int val=(vex.size()-s.size());
    cout<<val<<endl;

}
