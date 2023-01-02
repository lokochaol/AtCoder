#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
	string s, t;
	cin >> s >> t;
	if (s.length() < t.length()) {
		cout << "No" << "\n";
		return 0;
	}
	for (int i = s.length() - t.length(); i >= 0; i--) {
		int k = i;
		for (int j = 0; j <= t.length(); j++) {
			if (k-i == t.length()) {
				cout << "Yes" << "\n";
				return 0;
			}
			if (s[k] == t[j]) k++;
			else break;
		}
	}
	cout << "No" << "\n";
	return 0;
}