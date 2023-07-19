#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(1<=A && B<=10^6)
    {
        if((A%B && B%A)==0)
        {
        cout<<"Multiples"<<endl;
        }
        else
        {
         cout<<"No Multiples"<<endl;
        }
    }
}