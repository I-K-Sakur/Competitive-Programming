#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B,C;
    
    cin>>A>>B>>C;
    if(-10^5<=A && A<=10^5)
    {
       cout<<std::min({A,B,C})<<" "<<std::max({A,B,C})<<endl;
    }
}