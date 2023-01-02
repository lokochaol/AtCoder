#include <iostream>
using namespace std;

int main()
{
	int S,T,X;

	cin >> S >> T >> X;
	if (S < T)
	{
		if (S <= X && X < T)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else
	{
		if ((S <= X && X <= 23) || (0 <= X && X < T))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return (0);
}

