#include <iostream>

using namespace std;

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	x[3000], y[3000];
	int	i;

	i = 0;
	while (1)
	{
		cin >> x[i] >> y[i];
		if (x[i] == 0 && y[i] == 0)
			break;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		if (x[j] > y[j])
			swap(&x[j], &y[j]);
		cout << x[j] << " " << y[j] << endl;
	}
	return (0);
}