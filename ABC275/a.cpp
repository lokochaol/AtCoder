#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int max = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int h;
		cin >> h;
		if (h <= max) {
			max = h;
			ans = i+1;
		}
	}
	cout << ans << '\n';
	return 0;
}