#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int	main(void)
{
	int	l[2], r[2];
	rep(i, 2) cin >> l[i] >> r[i];
	int ans = 0;
	if (r[0] <= l[1] || (r[0]-l[0])+(r[1]-l[1]) <= r[0]-l[1])
		ans = 0;
	else if (l[0] <= l[1] && r[1] <= r[0])
		ans = r[1] - l[1];
	else if (l[1] <= l[0] && r[0] <= r[1])
		ans = r[0] - l[0];
	else if (l[0] <= l[1] and l[1] <= r[0])
		ans = r[0] - l[1];
	else
		ans = r[1] - l[0];
	cout << ans << endl;
	return 0;
}