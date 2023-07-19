#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int b= int(a);
    int flag=0;
    for(int i=65;i<=90;i++)
    {
        if(b==i)
        {
          flag=1;
        }
       
    }
    if(flag==1)
    {
      cout<<char(b+32)<<endl;
    }
    else{
      cout<<char(b-32)<<endl;
    }
}
