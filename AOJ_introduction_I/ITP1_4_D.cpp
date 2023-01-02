#include <stdio.h>
#include <iostream>
#include <limits.h>

using namespace std;

int	main(void)
{
	long int	n, a, min, max, sum;

	min = INT_MAX;
	max = INT_MIN;
	sum = 0;
	for (cin >> n; n > 0; n--)
	{
		cin >> a;
		if (a <= min)
			min = a;
		if (a >= max)
			max = a;
		sum += a;
	}
	printf("%ld %ld %ld\n", min, max, sum);
	return (0);
}