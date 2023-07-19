//https://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;

for(int i=1;i<=5;i++)
{
  for(int j=1;j<=5;j++)
  {
    cin>>x;
    if(x==1)
    {
      int n=abs(i-3)+abs(j-3);
     cout<<n<<endl;
       break;
  //cout<<x<<y;
    }
  }
}


}
