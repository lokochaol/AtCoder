#include <iostream>

using namespace std;

int	main(void)
{
	int	a[10000];
	int	i;

	i = 0;
	while (1)
	{
		cin >> a[i];
		if (a[i] == 0)
			break;
		i++;
	}
	for (int j = 0; j < i; j++)
		cout << "Case " << j + 1 << ": " << a[j] << endl;
	return (0);
}