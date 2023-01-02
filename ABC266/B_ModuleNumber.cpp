#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int	main(void)
{
	ll n;
	cin >> n;
	const int P = 998244353;
	int	ans = (n % P + P) % P;
	cout << ans << endl;
	return (0);
}