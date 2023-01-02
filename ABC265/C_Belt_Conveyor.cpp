#include <iostream>

using namespace std;

int	main(void)
{
	int		h, w;
	char	g[510][510];
	int		i, j;

	cin >> h >> w;
	for (i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cin >> g[i][j];
	}
	j = 0;
	for (i = 0; i >= 0 && i <= h - 1 && j >= 0  && j <= w - 1;)
	{
		if (g[i][j] == 'U')
		{
			g[i][j] = '0';
			i -= 1;
		}
		else if (g[i][j] == 'D')
		{
			g[i][j] = '0';
			i += 1;
		}
		else if (g[i][j] == 'L')
		{
			g[i][j] = '0';
			j -= 1;
		}
		else if (g[i][j] == 'R')
		{
			g[i][j] = '0';
			j += 1;
		}
		else
		{
			cout << i + 1 << " " << j + 1 << endl;
			return (0);
		}
		if (g[i][j] == '0')
		{
			cout << "-1" << endl;
			return (0);
		}
	}	
	if (i < 0)
		cout << i + 2 << " " << j + 1 << endl;
	else if (j < 0)
		cout << i + 1 << " " << j + 2 << endl;
	else if (i > h - 1)
		cout << i << " " << j + 1 << endl;
	else if (j > w - 1)
		cout << i + 1 << " " << j << endl;
	return (0);
}