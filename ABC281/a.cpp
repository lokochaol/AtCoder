#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
	int n;
	cin >> n;
	rep (i, n + 1) {
		cout << n - i << '\n';
	}
	return 0;
}