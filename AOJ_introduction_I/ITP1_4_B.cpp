#include <stdio.h>

#define PI 3.14159265359

using namespace std;

int	main(void)
{
	double	r;

	scanf("%lf", &r);
	printf("%.6lf %.6lf\n", r * r * PI, r * 2 * PI);
	return (0);
}