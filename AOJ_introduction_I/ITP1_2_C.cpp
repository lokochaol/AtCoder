#include <iostream>
#include <stdio.h>

using namespace std;

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int array[], int l, int r)
{
	int	pivot = array[r];
	int i = (l - 1);

	for (int j = l; j <= r - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[r]);
	return (i + 1);
}

void quickSort(int array[], int l, int r)
{
	if (l < r)
	{
		int pivot;

		pivot = partition(array, l, r);
		quickSort(array, l, pivot - 1);
		quickSort(array, pivot + 1, r);
	}
}

int	main(void)
{
	int	a[3];

	cin >> a[0] >> a[1] >> a[2];
	cout << sizeof(a) << " " << sizeof(a[0] )<< endl;
	quickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
	return (0);
}