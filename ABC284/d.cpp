#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)


vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
	int T;
	cin >> T;
	vector<int> ans_p(T, 1);
	vector<int> ans_q(T, 1);
	rep(i, T) {
		long long N;
    	cin >> N;
    	const auto &res = prime_factorize(N);
		int P = 1, Q = 1;
		for (auto p : res) {
			if (p.second % 2 == 1) {
				P *= (pow(double(p.first), double(p.second / 2)));
				Q *= p.first;
			}
			else {
				P *= pow(double(p.first), double(p.second / 2));
			}
		}
		ans_p[T] = P;
		ans_q[T] = Q;
	}
	rep(i, T) {
		cout << ans_p[T] << " " << ans_q[T] << "\n";
	}
    return 0;
}