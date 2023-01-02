#include <iostream>

using namespace std;

int	main(void)
{
	int		m[50], f[50], r[50];
	size_t	i, j;

	for (i = 0; 1; i++)
	{
		cin >> m[i] >> f[i] >> r[i];
		if (m[i] == -1 && f[i] == -1 && r[i] == -1)
			break;
	}
	for (j = 0; j < i; j++)
	{
		if (m[j] == -1 || f[j] == -1 || m[j] + f[j] < 30)
			cout << "F" << endl;
		else if (m[j] + f[j] >= 80)
			cout << "A" << endl;
		else if (m[j] + f[j] >= 65)
			cout << "B" << endl;
		else if (m[j] + f[j] >= 50)
			cout << "C" << endl;
		else
			{
				if (r[j] >= 50)
					cout << "C" << endl;
				else
					cout << "D" << endl;
			}
	}
	return (0);
}