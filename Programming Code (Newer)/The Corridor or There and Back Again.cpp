//https://codeforces.com/problemset/problem/1872/B
#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
	if(a<b) return a;
	return b;
}
int main()
{
  
int t;
cin>>t;
while(t--)
{
	
	int n,d,s,k=INT_MAX;
	cin>>n;
	vector<pair<long long ,long long >>vex;
	for(long long int i=0;i<n;i++)
	{
		cin>>d>>s;
		vex.push_back({d,s});
	}

    for(long long int i=0;i<n;i++)
	{
		k=min(vex[i].first+(vex[i].second-1)/2,k);
	}
	cout<<k<<endl;
}


}
