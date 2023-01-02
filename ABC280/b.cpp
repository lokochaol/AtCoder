#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
using ii = pair<ll, ll>;

int main(void) {
	int n;
	cin >> n;
	ll tmp = 0;
	vector<ll> res(n);
	rep(i, n) {
		ll input;
		cin >> input;
		res[i] = input - tmp;
		tmp = input;
	}
	rep(i, n) cout << res[i] << " ";
	return 0;
}