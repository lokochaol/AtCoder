#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
using ii = pair<ll, ll>;

vector<ll> prime_factorize(ll N) {
	vector<ll> res;
	for (ll a = 2; a * a <= N; ++a) {
		if (N % a != 0) continue;
		ll ex = 0;
		while (N % a == 0) {
			++ex;
			N /= a;
		}
		res.push_back(a);
	}
	if (N != 1) res.push_back(N);
	return res;
}

int main(void) {
	ll k;
	cin >> k;
	const auto &divs = prime_factorize(k);
	ll max = 1;
	for (auto p : divs) {
		if (p > max) max = p;
	}
	cout << max << "\n";
	return 0;
}