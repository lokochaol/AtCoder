#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int H, W;
	cin >> H >> W;
	vector<int> ans(W, 0);
	for (int i = 0; i < H; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < W; j++) {
			if (s[j] == '#')
				ans[j] += 1;
		}
	}
	for (int i = 0; i < W; i++){
		cout << ans[i];
		if (i != W-1)
			cout << " ";
	}
	cout << '\n';
	return 0;
}