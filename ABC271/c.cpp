#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	long long N;
	cin >> N;
	set<long long> a;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		a.insert(input);
	}
	long long ans = 0;
	long long have = N;
	for (int i = 1; ; i++) {
		if (a.count(i)) {
			have--;
			ans++;
		}
		else if (have > 1) {
			have -= 2;
			ans++;
		}
		else break;
	}
	cout << ans << endl;
	return 0;
}