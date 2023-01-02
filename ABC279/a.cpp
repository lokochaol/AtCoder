#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void){
	string s;
	cin >> s;
	int res = 0;
	rep(i,s.length()) {
		if(s[i] == 'v') res += 1;
		else res += 2;
	}
	cout << res << '\n';
	return 0;
}