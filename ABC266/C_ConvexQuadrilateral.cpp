#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

struct V { 
	int x, y;
	V(int x=0, int y=0): x(x), y(y) {}
	V operator-(const V& a) const {
		return V(x-a.x, y-a.y);
	}
	int cross(const V& a) const {
		return x*a.y - y*a.x;
	}
	int ccw(const V& a) const {
		int area = cross(a);
		if (area > 0) return +1; //ccw
		if (area < 0) return -1; //cw
		return 0; //collinear さらにどの位置にCがあるかで分類するといい。
	}
};

int	main(void)
{
	vector<V> p(4);
	rep(i, 4) cin >> p[i].x >> p[i].y;
	rep(i, 4) {
		V A = p[i];
		V B = p[(i+1)%4];
		V C = p[(i+2)%4];
		V b = B-A, c = C-A;
		if (b.ccw(c) != 1) { //ccw counter clock wise
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}

/*
int	main(void)
{
	double	x[4], y[4];
	double	l[3];
	double	sin;

	rep(i, 4) cin >> x[i] >> y[i];
	rep(j, 4)
	{
		rep(i, 3)
		{
			if (i == 1)
				l[i] = sqrt(pow(x[(j + i + 2) % 4] - x[(j + i) % 4], 2) + pow(y[(j + i + 2) % 4] - y[(j + i) % 4], 2));
			else
				l[i] = sqrt(pow(x[i + 1] - x[i], 2) + pow(y[i + 1] - y[i], 2));
			printf("l[%d] [ %lf ] ", i, l[i]);
		}
		sin = sqrt(1 - pow((l[0]+l[2]-l[1]) / (2 * l[0] * l[2]), 2));
		printf("sin [ %lf ]\n", sin);
		if (sin < 0)
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}
*/

