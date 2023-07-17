#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)


int main(void) {
	int N, M;
	cin >> N >> M;
	int ans = M;
	set<int> st;
	rep (i, M) {
		int a, b;
		cin >> a >> b;
		if (st.count(a) || st.count(b)) ans--;
		st.insert(a);
		st.insert(b);
	}
	rep(i, N) {
		if (!st.count(i+1)) ans++;
	}
	cout << ans << '\n';
	return 0;
}
