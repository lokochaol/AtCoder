#include <iostream>

using namespace std;

int	main(void)
{
	int	n, m;
	int	i, j;
	int	matrix_a[100][100], vector_b[100], out_val;

	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
			cin >> matrix_a[i][j];
	}
	for (i = 0; i < m; i++)
	{
		cin >> vector_b[i];
	}
	for (i = 0; i < n; i++)
	{
		out_val = 0;
		for (j = 0; j < m; j++)
			out_val += matrix_a[i][j] * vector_b[j];
		cout << out_val << endl;
	}
	return (0);
}