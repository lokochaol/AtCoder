#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

// C問題 https://atcoder.jp/contests/abc276/tasks/abc276_c

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i,n) cin >> p[i];

	for (int i = n-2; i >= 0; --i) {
		if (p[i] > p[i+1]) {
			int j = n-1;
			while (p[i] < p[j]) --j;
			swap(p[i],p[j]);
			reverse(p.begin()+(i+1), p.end());
			break;
		}
	}
	rep (i,n) cout << p[i] << ' ';
	cout << '\n';
	return 0;
}