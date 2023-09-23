//https://codeforces.com/contest/486/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum=0,val;
  cin>>n;
 if(n%2==0)
 {
   
    val=n/2;
 }
 else{
  val=-(n+1)/2;
 }
 cout<<val<<endl;
}
