#include<bits/stdc++.h>
using namespace std;
int main()
{

 map<string,int>mp;
 map<string,int>::iterator it;
 int n;
 string c;
 int a;
 cin>>n;
 for(int i=0;i<n;i++)
 {
    cin>>c>>a;
    mp.insert(make_pair(c,a));
 } 
//  for(it=mp.begin();it!=mp.end();it++)
//  {
    // if(mp.find("salman")!=mp.end())
    // {
    //     cout<<"mama paisi"<<endl;
    // }
    // else{
    //     cout<<"mama pai nai"<<endl;
    // }
    // cout<<it->first<<" "<<it->second<<endl;
 //}

  for(auto i:mp)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }
}
