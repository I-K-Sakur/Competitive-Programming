//https://codeforces.com/contest/768/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,mx,mn, a, sum = 0;
   cin >> n;
  
   vector<int> vex;
   vector<int> so;
   for (int i = 0; i < n; i++)
   {
      cin >> a;
      vex.push_back(a);
      so.push_back(a);
   }
   sort(so.begin(),so.end());
   mn=so[0];
   mx=so[n-1];
  
   if (vex.size() == 1 || vex.size() == 2)
   {
      cout << 0 << endl;
   }
   else
   {
      for (int j = 0; j < n; j++)
      {
         if (vex[j] == mn || vex[j] == mx)
         {
            sum = sum + 1;
         }
      }
      cout << n - sum << endl;
   }

   return 0;
}
