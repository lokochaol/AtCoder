#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	float A, B;
	cin >> A >> B;
	printf("%.3f\n", round((B/A)*1000)/1000);
	return 0;
}