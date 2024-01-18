//https://codeforces.com/contest/1921/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        int sum1 = count(s1.begin(), s1.end(), '1');
        int sum2 = count(s2.begin(), s2.end(), '1');
        int total_sum = sum1 + sum2,chng1=0,chng2=0;

        if (s1 == s2)
        {
            cout << 0 << endl;
        }
        else if (sum1 == 0 || sum2 == 0)
        {
            cout << max(sum1, sum2) << endl;
        }
        else
        {
            // cout << total_sum-sum2 << endl;
           for(int i=0;i<n;i++)
           {
            if(s1[i]=='0' && s2[i]=='1')
            {
                chng1++;
            }
            else if(s1[i]=='1' && s2[i]=='0')
            {
               chng2++;
            }
           }
           long long ans=min(chng1,chng2)+abs(chng1-chng2);
           cout<<ans<<endl;
        }
    }
    return 0;
}
