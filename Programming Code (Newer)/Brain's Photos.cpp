//https://codeforces.com/contest/707/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 cin>>a>>b;
//  vector<char>vex;
char vex[110];
 char x;
 bool flag=false;
 int sum=a+b;

 for(int i=0;i<a;i++)
 {
  for(int j=0;j<b;j++)

  {
      cin>>x;
      if(x=='C'|| x=='M'|| x=='Y')
      {
        cout<<"#Color"<<endl;
        flag=true;
        break;
      }
    
  }
   if(flag==true)
     {
      break;
     }
 
 }
  if(flag==false)
  {
    cout<<"#Black&White"<<endl;
  }

}
