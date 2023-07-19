#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if(1<=n && n<=10^3)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
          if(i%2==0)
          {
              cout<<i<<endl;
          }
          else if(n<=0 || n==1){
              cout<<"-1"<<endl;
          }
        }
    }

}
