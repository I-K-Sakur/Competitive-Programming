//https://codeforces.com/contest/1881/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   int n,m,counter=0;
   cin>>n>>m;
   string s1,s2;
   bool flag=false;
   cin>>s1>>s2;
  
  for(int i=0;i<=6 ;i++)
   {
	// size_t val= s1.find(s2);

	  if (s1.find(s2) != -1) {
                flag = true;
                break;
            }
	  s1+=s1;
	  counter+=1;
   }
   if(flag==true)
   {
	cout<<counter<<endl;
   }
   else{
	cout<<-1<<endl;
   }
   }
}
