#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void){
	int n, x;
	cin >> n >> x;
	vector<int> p(n);
	rep(i,n) cin >> p[i];
	int res = 0;
	rep(i,n) if (p[i] == x) {
		res = i + 1;
		break;
	}
	cout << res << '\n';
	return 0;
}