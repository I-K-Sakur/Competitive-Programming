#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,c=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(i==(n-1))
      {
          if(s[i]=='X'||s[i]=='Y'||s[i]=='Z')
          {
              c++;
          }
      }
    else{
    if(s[i]=='V')
    {
      c=c+5;
    }
    else if(s[i]=='W')
    {
      c=c+2;
    }
    else if(s[i]=='X')
     {
      i++;
     
     }
     else if(s[i]=='Y')
     {
       s.insert(s.end()-1,s[i+1]);
       
       i++;
       
     }
     else if(s[i]=='Z')
     {  
       if(s[i+1]=='V')
       {
          c=abs(c/5);
       }
       else if(s[i+1]=='W')
       {
         c=abs(c/2);
       }
     }
      }
    
  }
  cout<<c<<endl;
}