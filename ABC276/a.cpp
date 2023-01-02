#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main(void)
{
	string S;
	cin >> S;
	int res = -1;
	rep(i, S.length()) if(S[i] == 'a') res = i + 1;
	cout << res << '\n';
	return 0;
}