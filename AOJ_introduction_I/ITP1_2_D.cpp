#include <iostream>

using namespace std;

int	main(void)
{
	int	x, y;
	int	w, h, r;

	cin	>> w >> h >> x >> y >> r;
	if (x > 0 && y > 0 && x < w && y < h && r < w && r < h &&\
	x - r >= 0 && y - r >= 0 && x + r <= w && y + r <= h)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}