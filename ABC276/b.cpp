#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

// https://atcoder.jp/contests/abc276/tasks/abc276_b

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> to(n+1);
	rep(i,m) {
		int a, b;
		cin >> a >> b;
		to[a].push_back(b);
		to[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(to[i].begin(), to[i].end());
		cout << to[i].size();
		for (int v : to[i]) cout << ' ' << v;
		cout << '\n';
	}
	return 0;
}

/*
int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> is_connect(N, vector<int>(N));
	rep(i, M) {
		int city_a, city_b;
		cin >> city_a >> city_b;
		is_connect[city_a-1] = city_b-1;
		is_connect[city_b-1][city_a-1] = true;
	}
	rep (i, N) {
		int count = 0;
		rep (j, N) if (is_connect[i][j] == true) count++;
		cout << count << " ";
		rep (j, N) {
			if (is_connect[i][j] == true) {
				cout << j + 1;
				if (j != N-1) cout << " ";
			}
		}
		cout << "\n";
	}
}
*/