#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int	main(void)
{
	vector<int> n(5);
	rep(i, 5) cin >> n[i];
	set<int> st;
	rep(i, 5) st.insert(n[i]);
	if (st.size() != 2)
	{
		cout << "No" << endl;
		return 0;
	}
	else
	{
		int	count = 0;
		rep(i, 5) if(n[i] == n[0]) count++;
		if (count != 2 && count != 3)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}