#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    int Q;
    cin >> Q;
    int k = 0, x = 0;
    rep (i, Q) {
	int tag;
	cin >> tag;
	if (tag == 1) {
	    cin >> k >> x;
	    k -= 1;
	    a[k] = x;
	}
	else {
	    cin >> k;
	    k -= 1;
	    cout << a[k] << "\n";
	}
    }
    return 0;
}
