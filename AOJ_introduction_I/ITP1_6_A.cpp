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
	int		n;
	int		array[100];
	size_t	i;

	cin >> n;
	i = 0;
	while (i < n)
	{
		cin >> array[i];
		i++;
	}
	i = 0;
	while (i < n / 2)
	{
		swap(&array[i], &array[n - 1 - i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		cout << array[i];
		if (i != n - 1)
			cout << " ";
		i++;
	}
	cout << endl;
	return (0);
}