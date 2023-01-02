#include <iostream>

using namespace std;
/*
1. りんご一個あたりが１個ずつの方が安いまたは同じ場合は X * N
2. りんご一個あたりが３個ずつの方が安い場合は (N / 3) * X + (N % 3) * X
*/
int	main(void)
{
	int	x, y, n;

	cin >> x >> y >> n;
	if (x <= y / 3)
		cout << x * n << endl;
	else
		cout << (n / 3) * y + (n % 3) * x << endl;
	return (0);
}