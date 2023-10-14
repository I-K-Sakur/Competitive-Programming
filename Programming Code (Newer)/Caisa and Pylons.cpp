//https://codeforces.com/contest/463/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int n,a,x,sol=0;
  cin>>n;
  vector<int>vex;
  for(int i=0;i<n;i++)
  {
	cin>>a;
	vex.push_back(a);
  }
 int cnt=0,h=0,m;
 m=0-vex[0];
 cnt+=m;
 sol+=abs(cnt);
 cnt=0;
 for(int i=0;i<n-1;++i)
 {
		  m=vex[i]-vex[i+1];
		 cnt+=m;
		 if(cnt<0)
		 {
		 sol+=abs(cnt);
		 cnt=0;
		 }


}
cout<<sol<<endl;


}
