#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
using ii = pair<ll, ll>;

int main(void) {
    ll a, b;
    cin >> a >> b;
    ll res = 1;
    rep (i, b) {
	res *= a;
    }
    cout << res << "\n";
    return 0;
}
