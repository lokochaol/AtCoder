#include <bits/stdc++.h>
using namespace std;

#define rep (i, n) for (int i = 0; i < (n); i++)

int	main(void)
{
	int N, M;
	cin >> N >> M;
	vector<string> S(N);
	rep(i, N) cin >> S[i];
	set<string> ts;
	rep(i, m) {
		string t;
		cin >> t;
		ts.insert(t);
	}
	int max_u = 16-(n-1);//間に挟むやつの分引く
	rep(i,n) max_u -= s[i].size();//文字数分引く

	vector<bool> used(n);//使ったやつにマーク
	auto dfs = [&](auto f, int i, string s, int u) -> bool {
		if (i == n) {
			if (s.size() < 3) return false;
			if (ts.count(s)) return false;
			cout << s << endl;
			return true;
		}
		if (u) {
			if(f(f,i,s+'_',u-1)) return true;
		}
		rep(j,n) if (!used[j]) {
			used[j] = true;
			if (f(f,i+1,s+'_'+s[j],u)) return true;
			used[j] = false;
		}
		return false;
	};
	rep(i,n) {
		used[i] = true;
		if (dfs(dfs, 1, S[i], max_u)) return 0;
		used[i] = false;
	}
	cout << -1 << endl;
	return 0;
}