#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int	main(void)
{
	string	S, T;
	cin >> S >> T;
	if (S.size() > T.size()) {
		cout << "No" << endl;
		return 0;
	}
	for (int i = 0; (int)S.size(); i++) {
		if (S[i] != T[i]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}