#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
	int T;
	cin >> T;
	vector<int> ans(T, 0);
	rep (i, T) {
		int N;
		cin >> N; 
		rep (j, N) {
			int A;
			cin >> A;
			if (A%2 == 1) ans[i] += 1;
		}
	}
	for (int x : ans) {
		cout << x << '\n';
	}
	return 0;
}