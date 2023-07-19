#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int N, sum;
  cin >> N;
  if( 1 <= N || N <= 10^9 )
    {
     sum = N* (N + 1 ) / 2 ;
    }     
    cout << sum << endl;
}