#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int	X, Y, Z;
	cin >> X >> Y >> Z;
	if ((X > 0 && 0 < Y && Y < X && Z > Y) || (X < 0 && 0 > Y && Y > X && Z < Y)) { //壁の向こうにハンマーがあるので壊せない。
		cout << -1 << endl;
		return 0;
	}
	int ans = 0;
	if (X > 0) {
		if (0 < Y && Y < X) ans = abs(Z)+abs(X-Z);
		else ans = X;
	}
	else {
		if (X < Y && Y < 0) ans = abs(Z)+abs(X-Z);
		else ans = abs(X);
	}
	cout << ans << endl;
	return 0;
}