//problem Link:
//https://codeforces.com/contest/791/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n=0;
    cin>>a>>b;
    while(a<=b)
    {
       n=n+1;
       a=a*3;
       b=b*2;
    }
    cout<<n<<endl;
}
