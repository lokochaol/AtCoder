#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string S;
    cin >> S;
    size_t res = 0;
    for (size_t i = 0; i < S.length(); i++) {
	if (S[i] == '0' && S[i+1] == '0') i++;
	res++;
    }
    cout << res << '\n';
    return 0;
}
