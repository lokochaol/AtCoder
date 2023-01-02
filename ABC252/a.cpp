#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N, K;
	cin >> N >> K;
	vector<int> a(N);
	vector<bool> hate(N, 0);
	vector<bool> best_food(N, 0);
	int max = 0;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (a[i] >= max) max = a[i];
	}
	for (int i = 0; i < N; i++) {
		if (a[i] == max) best_food[i] = true;
	}
	for (int i = 0; i < K; i++) {
		int n;
		cin >> n;
		n -= 1;
		hate[n] = true;
	}
	for (int i = 0; i < N; i++) {
		if (best_food[i] == true && hate[i] == true) {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
	return 0;
}