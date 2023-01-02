#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
	string s;
	cin >> s;
	int len = s.length();
	if (len != 8) { cout << "No" << "\n"; return 0; }
	if (!('A' <= s[0] && s[0] <= 'Z')) { cout << "No" << "\n"; return 0; }
	if (!('A' <= s[len-1] && s[len-1] <= 'Z')) { cout << "No" << "\n"; return 0; }
	for (int i = 1; i < 7; i++) {
		if (!('0' <= s[i] && s[i] <= '9')) { cout << "No" << "\n"; return 0; }
		if (i == 1) {
			if (s[1] == '0') { cout << "No" << "\n"; return 0;}
		}
	}
	cout << "Yes" << "\n";
	return 0;
}