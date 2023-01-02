#include <iostream>

using namespace std;

int	a[100010];
int	bonus[100010][2];

int	main(void)
{
	long long int	n, m, t;
	int				i, bonus_count;

	cin >> n >> m >> t;
	for (i = 0; i < n - 1; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
		cin >> bonus[i][0] >> bonus[i][1];
	bonus_count = 0;
	for (i = 0; t > 0; i++)
	{
		if (i == n - 1)
		{
			cout << "Yes" << endl;
			return (0);
		}
		if (i + 1 == bonus[bonus_count][0])
		{
			t += bonus[bonus_count][1];
			bonus_count++;
		}
		t -= a[i];
	}
	cout << "No" << endl;
	return (0);
}