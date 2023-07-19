#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int X;
    int a;
    cin>>X;
    if(999<X && X<=9999)
    {
        a=X/1000;
    }
    if(a%2!=0)
    {
        cout<<"ODD"<<endl;
    }
    else{
        cout<<"EVEN"<<endl;
    }
    
}