#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int	N, Q;
	cin >> N >> Q;
	vector<int*> a_p(N);
	for (int i = 0; i < N; i++) {
		int L;
		cin >> L;
		a_p[i] = (int *)malloc(sizeof(int) * L);
		if (a_p[i] == NULL) return 0;
		for (int j = 0; j < L; j++) {
			cin >> a_p[i][j];
		}
	}
	vector<int> s(Q), t(Q);
	for (int i = 0; i < Q; i++) {
		cin >> s[i] >> t[i];
	}
	for (int i = 0; i < Q; i++) {
		cout << a_p[s[i]-1][t[i]-1] <<endl;
	}
	for (int i = 0; i < N; i++) {
		free(a_p[i]);
	}
	return 0;
}