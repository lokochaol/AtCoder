#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<int> even_max(2,0);
	vector<int> odd_max(2,0);
	int even_count = 0, odd_count = 0;
	for (int i = 0; i < N; i++){
		int A;
		cin >> A;
		if (A%2 == 0) {
			even_count++;
			if (A > even_max[0]) {
				even_max[1] = even_max[0];
				even_max[0] = A;
			}
			else if (A > even_max[1]) {
				even_max[1] = A;
			}
		}
		else {
			odd_count++;
			if (A > odd_max[0]) {
				odd_max[1] = odd_max[0];
				odd_max[0] = A;
			}
			else if (A > odd_max[1]) {
				odd_max[1] = A;
			}
		}
	}
	if (even_count < 2 && odd_count < 2) {
		cout << -1 << endl;
		return 0;
	}
	cout << max(even_max[0]+even_max[1], odd_max[0]+odd_max[1]) << endl;
	return 0;
}