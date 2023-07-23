//https://codeforces.com/contest/731/problem/A
#include <iostream>
#include <vector>
#include <string> // Include the <string> header for stoi
using namespace std;

int main() {
string s;
cin>>s;
char a='a';
int co=0;
int x=(int)a;
//cout<<x;
int l=26;
for(int i=0;i<s.length();i++)
{
    int ca=(int)s[i];
    int m=min(abs(ca-x),l-abs(ca-x));
    x=int(s[i]);
    //cout<<m<<" ";
    co=co+m;
    //cout<<co<<" ";
}
cout<<co;
}
