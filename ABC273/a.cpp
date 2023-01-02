#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
	if (n == 0) return 1;
	else return (n * f(n-1));
}

int main(void)
{
	int N;
	cin >> N;
	int res;
	res = f(N);
	cout << res << '\n';
	return 0;
}