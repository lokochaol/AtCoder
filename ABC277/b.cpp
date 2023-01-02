#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

bool solve() {
	int n;
	cin >> n;
	vector<string> s(n);
	set<string> st;
	rep(i,n) {
		cin >> s[i];
		st.insert(s[i]);
	}
	if (st.size() != n) return false;
	const string cs1 = "HDCS";
	const string cs2 = "A23456789TJQK";
	rep(i,n) {
		if (cs1.find(s[i][0]) == string::npos) return false;
		if (cs2.find(s[i][1]) == string::npos) return false;
	}
	return true;
}

int main() {
	if (solve()) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}

/*
int main(void){
	int n;
	cin >> n;
	vector<string> s(n);
	set<string> str_st;
	rep (i,n) {
		cin >> s[i];
		str_st.insert(s[i]);
	}
	if (str_st.size() != n) {
		cout << "No" << '\n';
		return 0;
	}
	rep (i,n) {
		if (!(s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S')) {
			cout << "No" << '\n';
			return 0;
		}
		if (!(s[i][1] == 'A' || s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q' || s[i][1] == 'K' || (s[i][1] >= '2' && s[i][1] <= '9'))) {
			cout << "No" << '\n';
			return 0;
		}
	}
	cout << "Yes" << '\n';
	return 0;
}
*/