//https://codeforces.com/contest/1873/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        multiset<int>m;
        int n,a,minu,multiple=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            m.insert(a);

        }
        minu=*m.begin()+1;
        m.erase(m.begin());
        m.insert(minu);
       for(auto it=m.begin();it!=m.end();it++)
       {
          multiple=multiple*(*(it));
       }
       cout<<multiple<<endl;
    }
}
 
