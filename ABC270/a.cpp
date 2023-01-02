#include <bits/stdc++.h>
using namespace std;

int point[3] = {1, 2, 4};

int	main(void)
{
	vector<int> S(2);
	cin >> S[0] >> S[1]; //0, 1, 2, 4, 3, 5, 6, 7
	vector<vector<bool>> ox(2, vector<bool>(3)); 
	for (int i = 0; i < 2; i++){
		if (S[i] == 1 || S[i] == 3 || S[i] == 5|| S[i] == 7) ox[i][0] = true;
		if (S[i] == 2 || S[i] == 3 || S[i] == 6|| S[i] == 7) ox[i][1] = true;
		if (S[i] == 4 || S[i] == 5 || S[i] == 6|| S[i] == 7) ox[i][2] = true;
	}
	int ans = 0;
	for (int i = 0; i < 3; i++){
		if (ox[0][i] == true || ox[1][i] == true)
			ans += point[i];
	}
	cout << ans << endl;
	return 0;
}