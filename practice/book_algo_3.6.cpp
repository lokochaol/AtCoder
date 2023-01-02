#include <iostream>
#include <vector>
using namespace std;

// 000 001 010 100
// N=3 W=13 0001:4 0010:9 0100:10 1000  OK-> "011"

int	main(void)
{
	int N, W;
	cin >> N >> W;
	vector<int> n(N);
	for (int i = 0; i < N; i++) cin >> n[i];
	bool exist = false;
	for (int bit = 0; bit < (1 << N); bit++) {
		int sum = 0;
		for (int i = 0; i < N; i++) {
			//bit の表す部分集合にi番目の要素が含まれている時 i番目のbitのフラグが立っているかを判定する1文
			if (bit & (1 << i)) {
				sum += n[i];
			}
		}
		if (sum == W) exist = true;
	}
	if (exist)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	return 0;
}