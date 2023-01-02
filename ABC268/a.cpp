
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

/*
int	main(void)
{
	vector<int> N(5);
	rep(i, 5) cin >> N[i];
	set<int> s;
	rep(i, 5) s.insert(N[i]);
	cout << s.size() << endl;
	return 0;
}*/

int	main(void)
{
	int N;
	set<int> st;
	rep(i, 5) {
		cin >> N;
		st.insert(N);
	}
	cout << st.size() << endl; 
	return 0;
}