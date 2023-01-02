#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	size_t si = 0;
	set<char> cs;
	bool ok = true;

	auto f = [&](auto f) -> void {
		string ns = "";
		while (si < s.size()) {
			char c = s[si++];
			if (c == '(') f(f);
			else if (c == ')') {
				for(char x : ns) cs.erase(x);
				return;
			}
			else {
				if (cs.count(c)) ok = false;
				ns += c;
				cs.insert(c);
			}
		}
	};

	f(f);
	if (ok) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}