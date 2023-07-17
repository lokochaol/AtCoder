// https://atcoder.jp/contests/abc310/tasks/abc310_b

#include <bits/stdc++.h>
using namespace std

int main(void) {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> data(N, vector<int>(M+2, 0));
	for (int i = 0; i < N; i++) {
		cin >> data[i][0] >> data[i][1];

		int f_max = data[i][1];
		for (int j = 0; j < f_max; j++) {
			cin >> data[j+2];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (data[i][0] <= data[j][0] && data[i][1] >= data[j][1]) { // dataの比較対象のどっちの値段が高いかがあらかじめわかるわけではない、、、
				if (check_)
			}
			else if ()
		}
	}
}