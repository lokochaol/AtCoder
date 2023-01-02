#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> s(h), t(h);
	for(int i = 0; i < h; i++) cin >> s[i];
	for(int i = 0; i < h; i++) cin >> t[i];

	vector<string> S(w), T(w);
	for(int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			S[j].push_back(s[i][j]);
			T[j].push_back(t[i][j]);
		}
	}

	sort(S.begin(), S.end());
	sort(T.begin(), T.end());

	if(S==T) cout << "Yes" << "\n";
	else cout << "No" << "\n";
	return 0;
}