#include <string>
#include <iostream>
using namespace std;

int main()
{
	string	s1,s2;

	cin >> s1 >> s2;
	size_t		s1_len,s2_len;
	s1_len = s1.length() - 1;
	s2_len = s2.length() - 1;

	int sum = 0;
	while (s1_len > 0 && s2_len > 0)
	{
		sum = s1.at(s1_len) + s2.at(s2_len);
		cout << "OK" << endl;
		cout << sum << endl;
		if (sum >= 10)
		{
			cout << "Hard" << endl;
			return (0);
		}
		else
		{
			s1_len--;
			s2_len--;
		}
	}
	cout << "Easy" << endl;
	return (0);
}
