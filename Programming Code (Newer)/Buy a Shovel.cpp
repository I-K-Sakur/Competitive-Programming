//https://codeforces.com/contest/732/problem/A
#include<bits/stdc++.h>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
int sum=0;
for(int i=1;;i++)
{
    sum=sum+a;
    if((sum%10==0) || (sum%10==b))
    {
        cout<<i<<endl;
        break;
    }
    else{
        continue;
    }
}

}
