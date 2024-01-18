//https://codeforces.com/contest/1921/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t, a, b;
   long long distance = 0, area = 0;
   cin >> t;
   while (t--)
   {
       vector<pair<int, int>> v;
       for (int i = 0; i < 4; i++)
       {
           cin >> a >> b;
           v.push_back({a, b});
       }
       sort(v.begin(), v.end());

       distance = sqrt(pow(abs(v[0].first - v[2].first), 2) + pow(abs(v[0].second - v[2].second), 2));
       area = pow(distance, 2);
       cout << area << endl;
   }
   return 0;
}
