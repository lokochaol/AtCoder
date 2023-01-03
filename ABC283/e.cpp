#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector a(h, vector<int>(w));
  rep(i,h)rep(j,w) cin >> a[i][j];
  const int INF = 1001001001;
  auto get = [&](int i, bool flip) {
    vector<int> res = a[i];
    if (flip) rep(i,w) res[i] ^= 1;
    return res;
  };
  auto check = [&](const vector<int>& a0, const vector<int>& a1, const vector<int>& a2) {
    rep(i,w) {
      if (a0[i] == a1[i]) continue;
      if (a2[i] == a1[i]) continue;
      if (i && a1[i-1] == a1[i]) continue;
      if (i+1 < w && a1[i+1] == a1[i]) continue;
      return false;
    }
    return true;
  };
  vector<int> dp(4,INF);
  rep(s,4) {
    vector<int> a0(w,-1);
    auto a1 = get(0,s&2);
    auto a2 = get(1,s&1);
    int cnt = 0;
    if (s&1) cnt++;
    if (s&2) cnt++;
    if (check(a0,a1,a2)) dp[s] = cnt;
  }

  for (int i = 2; i < h; i++) {
    vector<int> p(4,INF);
    swap(p,dp);
    rep(s,4) {
      auto a0 = get(i-2,s&2);
      auto a1 = get(i-1,s&1);
      rep(x,2) {
        auto a2 = get(i,x);
        if (check(a0,a1,a2)) {
          int ns = (s&1)<<1 | x;
          dp[ns] = min(dp[ns],p[s]+x);
        }
      }
    }
  }

  int ans = INF;
  rep(s,4) {
    auto a0 = get(h-2,s&2);
    auto a1 = get(h-1,s&1);
    vector<int> a2(w,-1);
    if (check(a0,a1,a2)) ans = min(ans, dp[s]);
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}


/*
bool is_alone(vector<vector<int>> &a, int i, int j, int w) {
	int targ_val = a[i][j];
	bool res = false;
	if (i == 0) {
		if (j == 0) {
			if (targ_val != a[i][j+1] && targ_val != a[i+1][j])
				res = true;
		}
		else if (j == w-1) {
			if (targ_val != a[i][j-1] && targ_val != a[i+1][j])
				res = true;
		}
		else {
			if (targ_val != a[i][j+1] && targ_val != a[i][j-1] && targ_val != a[i+1][j])
				res =true;
		}
	}
	else if (j == 0) {
		if (targ_val != a[i][j+1] && targ_val != a[i-1][j])
			res = true;
	}
	else if (j == w-1) {
		if (targ_val != a[i][j-1] && targ_val != a[i-1][j])
			res = true;
	}
	else {
		if (targ_val != a[i][j+1] && targ_val != a[i][j-1] && targ_val != a[i-1][j])
			res = true;
	}
	return res;
}

bool alone_still_exist(vector<vector<int>> &a, int i, int w) {
	rep(j, w) {
		if (is_alone(a, i, j, w)) return true;
	}
	return false;
}

void turn_over(vector<vector<int>> &a, int i, int w) {
	rep (j, w) {
		if (a[i][j] == 1)
			a[i][j] -= 1;
		else
			a[i][j] += 1;
	}
}

int main(void) {
	int h, w;
	cin >> h >> w;

	vector<vector<int>> a(h, vector<int>(w)); //　いいかげん覚えてー！
	//　2次元配列に値を受け取る
	rep (i, h) rep (j, w) cin >> a[i][j];

	// 配列を順に探索。
	int count = 0;
	vector<bool> ok(h, true);

	for (int i = 1; i < h; i++) {
		if (alone_still_exist(a, i-1, w)) {
			ok[i-1] = false;
		}
		for (int j = 0; j < w; j++) {
			if (!ok[i-1]) {
				turn_over(a, i, w);
				if (alone_still_exist(a, i-1, w)) {
					if (i == 1) {
						turn_over(a, i, w);
						turn_over(a, 0, w);
						if (!alone_still_exist(a, 0, w)) {
							count++;
							cout << "ok" << endl;
							break;
						}
					}
					cout << -1 << '\n';
					return 0;
				}
				else {
					count++;
					break;
				}
			}
		}
		rep (j, w) cout << a[i][j] << " ";
		cout << endl;
	}
	cout << '\n';
	rep (i, h) {
		rep (j, w) {
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	cout << count << '\n';
	return 0;
}
*/

