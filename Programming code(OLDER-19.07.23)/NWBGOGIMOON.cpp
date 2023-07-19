#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int a;
    int yes=0;
    int no=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>a;
     
      if(a==1)
      {
        yes=yes+1;
        
      }
      else if(a==0){
        no=no+1;
     
      }
    }
    if(yes>no)
    {
      cout<<"gogi_to_the_moon"<<endl;
    }
    else if(no>yes){
      cout<<"kiddo"<<endl;
    }
}