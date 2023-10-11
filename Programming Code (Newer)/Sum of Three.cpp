//https://codeforces.com/contest/1886/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n;
  cin>>n;

	if (n % 3 == 0) {
		if (n < 12) {
			cout << "NO\n";
		} else {
			cout << "YES\n1 4 " << n - 5 << "\n";
		}
	} else if (n % 3 == 1) {
		if (n < 7) {
			cout << "NO\n";
		} else {
			cout << "YES\n1 2 " << n - 3 << "\n";
		}
	} else {
		if (n < 8) {
			cout << "NO\n";
		} else {
			cout << "YES\n1 2 " << n - 3 << "\n";
		}
	}
}
}


