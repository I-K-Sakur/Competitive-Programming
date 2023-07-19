#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float r,pi=3.141592653;
    cin>>r;
    cout<<fixed<<setprecision(9)<<(pi*pow(r,2))<<endl;
    return 0;
}
