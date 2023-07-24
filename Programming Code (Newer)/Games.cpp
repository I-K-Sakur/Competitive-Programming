//https://codeforces.com/contest/268/problem/A
#include <iostream>
#include <vector>
#include <string> // Include the <string> header for stoi
using namespace std;

int main() {
int n,a,b,co=0;
bool flag;
cin>>n;
vector<pair<int,int>>vex;
for(int i=0;i<n;i++)
{
    cin>>a>>b;
    vex.push_back({a,b});
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
     if(vex[i].first==vex[j].second)
     {
        co=co+1;
        flag=true;
     }
   
    }
}
if(flag)
{
    cout<<co<<endl;
}
else{
    cout<<"0"<<endl;
}
}
