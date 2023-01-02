#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s, t;
	cin >> s >> t;
	size_t res = 0;
	for(size_t i = 0; i <= s.size(); i++) {
		if (s[i] != t[i]) {
			res = i + 1;
			break;
		}
	}
	cout << res << "\n";
	return 0;
}