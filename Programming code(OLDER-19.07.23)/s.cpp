#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if(x>=-1000 && x<=1000)
    {
        if(x>=0 && x<=25.0000)
        {
            cout<<"Interval [0,25]"<<endl;
        }
        if(x>=25.00001 && x<=50.0000000)
        {
            cout<<"Interval (25,50]"<<endl;
        }
        if(x>=50.00000001 && x<=75.0000000)
        {
            cout<<"Interval (50,75]"<<endl;
        }
        if(x>=75.0000001 && x<=100)
        {
            cout<<"Interval (75,100]"<<endl;
        }
        if(x<=-0.1 || x>=100.000001){
            cout<<"Out of Intervals"<<endl;
        }
    }
}