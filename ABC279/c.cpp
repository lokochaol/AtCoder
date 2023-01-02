#include <bits/stdc++.h>
#include <string>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

// ABC279　C問題　https://atcoder.jp/contests/abc279/tasks/abc279_c

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> s(h), t(h);
	for(auto &nx : s) cin >> nx;
	for(auto &nx : t) cin >> nx;
	
	vector<string> S(w), T(w);
	rep(i, h) {
		rep(j, w) {
			S[j].push_back(s[i][j]);
			T[j].push_back(t[i][j]);
		}
	}

	sort(S.begin(), S.end());
	sort(T.begin(), T.end());
	if(T==S) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}