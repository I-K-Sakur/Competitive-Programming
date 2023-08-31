//https://codeforces.com/contest/208/problem/A

#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool l=false;
int main()
{
string s,s2;
cin>>s;
 for(int i=0;i<s.length();i++)
 {
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
	{
		s.erase(s.begin()+i,s.begin()+(i+2));
		if(l==true)
		{
			cout<<" ";
	       l=false;
	    }
	}
	else{

		cout<<s[i];
		l=true;
	}
	
 


}
}
