#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int	main(void)
{
	int	y;
	cin >> y;
	while(y%4 != 2) y++;
	cout << y << endl;
	return 0;
}
