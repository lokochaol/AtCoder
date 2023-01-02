#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
	}
	cout << sum << endl;
	return 0;
}