#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int	main(void)
{
	int n;
	cin >> n;
	vector<int> p(n-1);
	rep(i, n-1) cin >> p[i];
	int parent = p[n-2], count = 1;
	while (parent != 1){
		count++;
		parent = p[parent-2];
	}
	cout << count << endl;
	return 0;
}