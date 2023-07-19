//Problem linl:
//https://codeforces.com/contest/231/my

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,c,sav=0;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>a>>b>>c;
  if(a+b+c>=2)
  {
    sav=sav+1;
  }

}
cout<<sav<<endl;
}
