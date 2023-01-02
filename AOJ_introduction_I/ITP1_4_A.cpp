#include <iostream>
#include <stdio.h>

using namespace std;

int	main(void)
{
	int a, b;

	cin >> a >> b;
	printf("%d %d %.5lf\n", a / b, a % b, (double)a/b);//C++のcastには種類がある、　dynamic_cast, static_cast, const_cast
	return (0);
}