#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>(a);
    int b = int(a);
      int flag=0;
    if(b==48 || b==49|| b== 50|| b==51||b==52||b==53||b==54||b==55||b==56||b==57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else
    {   
        cout<<"ALPHA"<<endl;
       for(int i=97;i<=122;i++)
       {
        if(b==i)
        {
          flag=1;
        }
       }
        if(flag ==1)
        {
         cout<<"IS SMALL"<<endl;
        }
       else
        {
         cout<<"IS CAPITAL"<<endl;
        } 
        
    }
}
