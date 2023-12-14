//https://codeforces.com/contest/1895/problem/A
#include<bits/stdc++.h>
using namespace std;
// const int N = int(1e5 + 3);
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    
    
   int chest,key,stamina,distance;
   cin>>chest>>key>>stamina;
   int diff=abs(chest-key);
   int chemina=chest+stamina;
   int keychemina=abs(chemina-key)*2;
   if(chest>=key)
   {
      
    cout<<chest<<endl;
   }
   else if(key>chest)
   {
     if(stamina<diff)
     {
        distance=chemina+keychemina;
     }
     else{
        distance=key;
     }
   
   cout<<distance<<endl;
   }
    }

}
