//https://codeforces.com/contest/1916/submission/240607858
https://codeforces.com/contest/1916/problem/A

#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k; long long mul = 1;
        cin >> n >> k;

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            mul *= b;
            v.push_back(b);
        }


     if(2023%mul!=0)
     {
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
        cout<<2023/mul<<" ";
        for(int i=0;i<k-1;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;

     }

    }

    return 0;
}
