#include <bits/stdc++.h>
using namespace std;

vector<string> s = {
	"BBBBBBBBBBBBBBB",
	"B.............B",
	"B.BBBBBBBBBBB.B",
	"B.B.........B.B",
	"B.B.BBBBBBB.B.B",
	"B.B.B.....B.B.B",
	"B.B.B.BBB.B.B.B",
	"B.B.B.B.B.B.B.B",
	"B.B.B.BBB.B.B.B",
	"B.B.B.....B.B.B",
	"B.B.BBBBBBB.B.B",
	"B.B.........B.B",
	"B.BBBBBBBBBBB.B",
	"B.............B",
	"BBBBBBBBBBBBBBB",
};

int	main(void)
{
	int	r, c;
	cin >> r >> c;
	if (s[r-1][c-1] == 'B')
		cout << "black" << endl;
	else
		cout << "white" << endl;
	return 0;
}