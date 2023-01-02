#include <iostream>
#include <queue>
#include <map>
#include <set>
using namespace std;

//C問題
// https://atcoder.jp/contests/abc277/tasks/abc277_c

int main() {
	int n;
	cin >> n;
	map<int, vector<int>> graph;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	queue<int> que;
	que.push(1);
	set<int> S;
	S.insert(1);
	while (!que.empty()) {
		int v = que.front(); que.pop();
		for (int i : graph[v]) {
			if (!S.count(i)) {
				que.push(i);
				S.insert(i);
			}
		}
	}
	cout << *S.rbegin() << '\n';
}

/*
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int find_H(int find, vector<vector<int>> H) {
	if (H[find].size() == 0)
		return 0;
	int res = 1;
	for (int i = 0; i < H[find].size(); i++) {
		res = max(res, find_H(H[find][i], H));
	}
	return res;
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> to(n*2);
	set<int> st;
	rep(i,n) {
		int a, b;
		cin >> a >> b;
		st.insert(a), st.insert(b);
		to[i].push_back(b);
		to[i].push_back(a);
	}
	if (to[1].size() == 0) {
		cout << '1' << '\n';
		return 0;
	}
	int res = 1;
	for (int i = 0; i < to[1].size(); i++) {
		int find = to[1][i];
		res = max(res, find_H(find, to));
	}
	cout << res << endl;
	return 0;
}
*/