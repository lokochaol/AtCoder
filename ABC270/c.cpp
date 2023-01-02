#include <bits/stdc++.h>
using namespace std;

int	main(void){
	int	N, X, Y;
	cin >> N >> X >> Y;
	int ui, vi;
	vector<vector<bool>> pass(N, vector<bool>(N-1));
	vector<vector<bool>> pass_rev(N, vector<bool>(N-1));
	for (int i = 0; i < N-1; i++) {
		cin >> ui >> vi;
		pass[ui][vi] = true;
		rev_pass[vi][ui] = true;
	}
	string ans;
	bool find = false;
	while (!find){
		if (pass[X][i] == true) {
			X = i;
			check[X][i] == true;
			ans+= '0'+X;
		}
		else if (rev_pass[X][i] == true) {
			X = i;
			check[X][i] == true;
		}
		if (X = )
}