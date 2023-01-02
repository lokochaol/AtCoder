#include <iostream>

using namespace std;

//bfrv
int	main(void)
{
	int	n;
	int	b[1000], f[1000], r[1000], v[1000];
	int	room[3][10];
	int	i, j, k;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> b[i] >> f[i] >> r[i] >> v[i];

	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 10; k++)
				room[j][k] = 0;
		}
		for (j = 0; j < n; j++)//読み取り、結果の反映
		{
			if (b[j] == i + 1)
				room[f[j] - 1][r[j] - 1] += v[j];
		}
		for (j = 0; j < 3; j++)//出力
		{
			for (k = 0; k < 10; k++)
				cout << " " << room[j][k];
			cout << endl;
		}
		if (i < 3)
			cout << "####################" << endl;
	}
	return (0);
}