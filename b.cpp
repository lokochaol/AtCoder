#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); i++)

int	main(void)
{
	vector<string> S(10);
	rep(i,10) cin >> S[i];
	int A=0, B=0, C=0, D=0;
	bool find = false;
	rep(i,10) {
		rep(j,10) {
			if (!find && S[i][j] == '#') {
				find = true;
				A = i+1;
				C = j+1;
			}
			if (find && S[i][j] == '#') {
				B = i+1;
				D = j+1;
			}
		}
	}
	printf("%d %d\n%d %d\n", A, B, C, D);
	return 0;
}