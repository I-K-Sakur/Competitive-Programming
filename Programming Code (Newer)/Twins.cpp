//https://codeforces.com/contest/160/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,sum=0,rem=0,coin=0;;
 int div;
  cin>>n;
  priority_queue<int>vex;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    sum=sum+a;
    vex.push(a);
  }
  div=sum/2;
  for(int i=0;i<n;i++)
  {
    if(rem<=div)
    {
        rem=rem+vex.top();
        coin=coin+1;
        vex.pop();
    }
    else{
        continue;
    }
  }
  cout<<coin<<endl;
}




