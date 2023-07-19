#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int p=0,n=0;
    string s;
    for(int i=0;i<4;i++)
    {
       cin>>s[i];
     
      
    if(s[i]=='+')
    {
       p++;
    }
    else if(s[i]=='-')
    {
        n++;
    }
    }
    cout<<(p-n)<<endl;
    return 0;
}