#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string X;
	int K;
	cin >> X >> K;
	if (X.size() < (size_t)K) {
		cout << "0\n";
		return 0;
	}
	for (int i = X.size() - 1; i >= 0 && K > 0; i--) {
		if (X[i] >= '5') {
			if (i == 0) {
				X[i]='0';
				X = "1" + X;
			}
			else {
				X[i] = '0';
				X[i-1] += 1;
			}
		}
		else {
			X[i] = '0';
			if (i == 0)
				cout << "0\n";
		}
		K--;
	}
	for (int i = X.size() - 1; i >= 0; i--) {
		if (X[i] == ':') {
			X[i] = '0';
			if (i != 0) X[i-1] += 1;
			else X = "1" + X;
		}
	}
	bool zero = true;
	for (int i = X.size() - 1; i >= 0; i--) {
		if (X[i] != '0') zero = false;
	}
	if (zero == true) X = "0";
	cout << X << endl;
}