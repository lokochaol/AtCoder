#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (long long i = 0; i < (n); i++)

int main(void)
{
	int	N;
	cin >> N;
	vector<int> p(N);
	rep (i, N) cin >> p[i];
	vector<int> cnt(N, 0);
	rep (i, N) {
		int j = (p[i]-i-1+N)%N;
		rep (k, 3) cnt[(j+k)%N]++;
	}
	int ans = 0;
	rep (i, N) {
		ans = max(ans, cnt[i]);
	}
	cout << ans << endl;
}

/*
int	main(void)
{
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	vector<int> cnt(n);
	rep(i, n) {
		int j = ((p[i]-i-1+n)%n);
		cnt[(j+0)%n]++;
		cnt[(j+1)%n]++;
		cnt[(j+2)%n]++;
	}
	int ans = 0;
	rep(i, n) ans = max(ans, cnt[i]);
	cout << ans << endl;
	return 0;
}
*/

/*
int	main(void)
{
	long long N;
	cin >> N;
	vector<long long> P(N);
	rep(i, N) cin >> P[i];
	long long count = 0;
	long long ans = 0;
	rep(i, N) {
		rep(j, N) {
			if (P[j] == j || P[((j-1)+N)%N] == j || P[(j+1)%N] == j)
				count++;
		}
		if (ans < count)
			ans = count;
		count = 0;
		long long tmp = P[N-1];
		for (long long j = N-1; j > 0; j--) {
			P[j] = P[j-1];
		}
		P[0] = tmp;
	}
	cout << ans << endl;
	return 0;
}*/