#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int	main(void)
{
	string	dow_st;
	cin >> dow_st;
	map<string, int> day_of_week;
	day_of_week["Monday"] = 5;
	day_of_week["Tuesday"] = 4;
	day_of_week["Wednesday"] = 3;
	day_of_week["Thursday"] = 2;
	day_of_week["Friday"] = 1;
	cout << day_of_week[(string)dow_st] << endl;
	return 0;
}
