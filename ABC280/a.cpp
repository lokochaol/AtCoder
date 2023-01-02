#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
	int h, w;
	cin >> h >> w;
	int res = 0;
	rep(i, h) {
		string s;
		cin >> s;
		rep (j, w) {
			if (s[j] == '#') res++;
		}
	}
	cout << res << "\n";
	return 0;
}