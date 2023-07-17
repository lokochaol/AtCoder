#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	stack<string> st;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		st.push(s);
	}
	for (int i = 0; i < n; i++) {
		for (char x : st.top()) {
			cout << x;
		}
		cout << '\n';
		st.pop();
	}
	return 0;
}