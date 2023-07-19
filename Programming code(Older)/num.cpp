#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float A , B;
    cin >> A >> B;
     if ( 1 <= A && B <= 10^3)
     {
         cout << "floor " << A << " / " <<  B  << " = " <<floor(A/B)<<endl;
         cout << "ceil " << A << " / " <<  B  << " = " << ceil( A /B) <<endl;
         cout << "round " << A << " / " <<  B  << " = " <<round(A/B)<<endl;
     }
}
