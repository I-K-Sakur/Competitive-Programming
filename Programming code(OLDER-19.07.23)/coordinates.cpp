#include<bits/stdc++.h>
using namespace std;
int main()
{
    float X,Y;
    cin>>X>>Y;
    if(-1000<=X && Y<=1000)
    {
       if(X>0 && Y>0)
       {
           cout<<"Q1"<<endl;
       }
       if(X<0 && Y>0)
       {
           cout<<"Q2"<<endl;
       }
       if(X<0 && Y<0)
       {
            cout<<"Q3"<<endl;
       }
       if(X>0 && Y<0)
       {
           cout<<"Q4"<<endl;
       }
       if(X==0 && Y==0)
       {
           cout<<"Origem"<<endl;
       }
       if((X<0||X>0) && (Y==0))
        {
           cout<<"Eixo X"<<endl;
        }
        if(X==0 && (Y<0 ||Y>0))
       {
         cout<<"Eixo Y"<<endl;
       }
    }
    return 0;
}    