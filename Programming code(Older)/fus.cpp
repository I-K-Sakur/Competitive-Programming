#include <bits/stdc++.h>
using namespace std;

void vow(string s, int n, int coun)
{
    if (n == s.size())
    {
        cout << coun << endl;
        return;
    }
    else
    {
        cout << "e" << endl;
        if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U')
        {
            cout << "111" << endl;

            coun = coun + 1;
            n = n + 1;
            vow(s, n, coun);
        }
        else
        {
            n = n + 1;
            vow(s, n, coun);
        }
    }
}

int main()
{
    string s;
    int n = 0, coun = 0;
    getline(cin, s);
    vow(s, n, coun);
}
