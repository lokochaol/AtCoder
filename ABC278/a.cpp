#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

int main(void){
	int n, k;
	cin >> n >> k;
	queue<int> que;
	rep(i,n) {
		int a;
		cin >> a;
		que.push(a);
	}
	rep(i,k) {
		que.pop();
		que.push(0);
	}
	rep(i,n) {
		cout << que.front() << ' '; 
		que.pop();
	}
	cout << '\n';
	return 0;
}