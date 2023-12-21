//https://codeforces.com/problemset/problem/1907/B
#include <bits/stdc++.h>
using namespace std;

void right(string s) {
    stack<int> up;
    stack<int> low;
    set<int> st;
    map<int, char> mp;
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i]) && s[i] != 'B') {
            up.push(i);
        } else if (islower(s[i]) && s[i] != 'b') {
            low.push(i);
        } else if (s[i] == 'b' && !low.empty()) {
            low.pop();
        } else if (s[i] == 'B' && !up.empty()) {
            up.pop();
        }
    }

    while (!up.empty()) {
        mp.insert({up.top(), s[up.top()]});
        up.pop();
    }

    while (!low.empty()) {
        mp.insert({low.top(), s[low.top()]});
        low.pop();
    }

    for (const auto& p : mp) {
        cout << p.second;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        right(s);
    }
    return 0;
}
