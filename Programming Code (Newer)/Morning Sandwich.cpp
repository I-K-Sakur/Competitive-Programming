//https://codeforces.com/contest/1849/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int sum=2;
   int b,c,h,rem,slic,yo,bread;
   cin>>b>>c>>h;
   if(b==2)
   {
     sum=sum+1;
   }
   else if(b>(c+h))
   {
      yo=c+h;
      bread=yo-1;
      sum=sum+yo+bread;
   }
   else
   {
     b=b-2;
     slic=b+1;
     sum=sum+b+slic;
   }
   cout<<sum<<endl;
 }
}
