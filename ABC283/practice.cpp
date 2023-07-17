#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	stack<string> stk;
	stk.push("");
	set<char> cs;

	for (char c : s) {
		if (c == '(') {
			stk.push("");
		}
		else if (c == ')') {
			for (char x : stk.top()) cs.erase(x);
			stk.pop();
		}
		else {
			if (cs.count(c)) {
				cout << "No" << endl;
				return 0;
			}
			stk.top() += c;
			cs.insert(c);
		}
	}
	cout << "Yes" << endl;
	return 0;
}