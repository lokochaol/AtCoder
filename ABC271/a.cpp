#include <bits/stdc++.h>
using namespace std;

char henkan[17] = "0123456789ABCDEF";

int	main(void)
{
	int	N;
	cin >> N;
	string answer;
	for (int i=0, j=0; i < 2; i++) {
		j = N%16;
		N = N/16;
		answer[i] = henkan[j];
	}
	for(int i = 1; i>=0; i--) {
		printf("%c",answer[i]);
	}
	return 0;
}