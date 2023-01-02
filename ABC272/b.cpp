#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<bool>> match(N, vector<bool>(N, false));//N*N
	for (int i = 0; i < M; i++){
		int k;
		cin >> k;
		vector<int> x(k);
		for (int j = 0; j < k; j++){
			cin >> x[j];
			x[j] -= 1;
		}
		for (int j = 0; j < k; j++) {
			for (int z = j+1; z < k; z++) {
				if (!match[x[j]][x[z]]) {
					match[x[j]][x[z]] = true;
					match[x[z]][x[j]] = true;
				}
			}
		}
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (match[i][j] == false) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}