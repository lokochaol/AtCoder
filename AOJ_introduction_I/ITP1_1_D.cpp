#include <iostream>

using namespace std;

int	main(void)
{
	int	S, h, m, s;

	cin >> S;
	s = S % 60;
	m = (S / 60) % 60;
	h = S / 60 / 60;
	cout << h << ":" << m << ":" << s << endl;
	return (0);
}