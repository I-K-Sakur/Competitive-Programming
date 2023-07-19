#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(0<=A && B<=100)
    {
        if(A>=B)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}