#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void)
{
    int n;
    cin >> n;
    char res;
    res = 'A';
    rep(i,n) {
	cout << res;
	res += 1;
    }
    cout << '\n';
    return 0;
}


