#include <bits/stdc++.h>
using namespace std;

/*
int	main(void)
{
	vector<int> N(5);
	for (int i = 0; i < 5; i++) cin >> N[i];
	set<int> st;
	for (int i = 0; i < 5; i++) st.insert(N[i]); //i 0~4
	cout << st.size() << endl;
	return 0;
}
*/


int main(void)
{
	string A;
	cin >> A;
	cout << A[A.size()/2] << endl; // A.size() で文字列の長さを取ってきて、割る2するだけでいけたりします！！
	return 0;
}

// 31 9 24 31 24
// A