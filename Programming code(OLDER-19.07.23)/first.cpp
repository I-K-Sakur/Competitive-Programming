#include<bits/stdc++.h>
using namespace std;

// int score = 0;
int main()
{
	string s;
  cin>>s;
 
  
  
  for(int i=x;i<=x+4;i++)
  {
    if(i==x)
    {
      s[i]=' ';
    }
    else{
      s.erase(s.begin()+i);
    }
    
  }
  cout<<s<<endl;
}