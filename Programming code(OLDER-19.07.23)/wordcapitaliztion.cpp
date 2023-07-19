#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    if(int(st[0])>=int(int('A')+32))
      {
          st[0]=char(int(int(st[0])-32));
          cout<<st<<endl;
      }
      else{
          cout<<st<<endl;
      }
}