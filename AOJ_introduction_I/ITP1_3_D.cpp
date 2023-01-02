#include <iostream>

using namespace std;

int	main(void)
{
	int	a, b, c;
	int	count;

	cin >> a >> b >> c;
	count = 0;
	while (a <= b)
	{
		if (c % a == 0)
			count += 1;
		a++;
	}
	cout << count << endl;
	return (0);
}