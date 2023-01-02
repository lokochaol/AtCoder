/*
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int	main(void)
{
	long long int	N, want_sum[3], count, sum, i, j;

	cin >> N >> want_sum[0] >> want_sum[1] >> want_sum[2];
	vector<long long int>		A(N);
	rep(i, N) cin >> A[i];
	for(i = 0; i < N - 3; i++)
	{
		sum = A[i];
		count = 0;
		for (j = i + 1; i + j <= N; j++)
		{
			if (sum > want_sum[count])
				break;
			else if (sum == want_sum[count])
			{
				count++;
				sum = 0;
			}
			if (count == 3)
			{
				cout << "Yes" << endl;
				return (0);
			}
			sum += A[j];
		}
	}
	cout << "No" << endl;
	return (0);
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int	main()
{
	int	n;
	cin >> n;
	vector<ll> b(3);
	rep(i, 3) cin >> b[i];
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<ll> s(n+1);
	rep(i, n) s[i + 1] = s[i] + a[i];//和の数列を作ってる
	unordered_set<ll> st;
	rep(i, n + 1) st.insert(s[i]);

	rep(i, n + 1)
	{
		ll ns = s[i];
		rep(j, 3)
		{
			ns += b[j];
			if(!st.count(ns)) break;
			if(j == 2)
			{
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
	return (0);
}
*/

//1 3 2 2 2 3 1 4 3 2
//0 1 4 6 8 10 13 14 18 21 23
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int	main(void)
{
	int	n;
	cin >> n;
	vector<ll> b(3);
	rep(i, 3) cin >> b[i];
	vector<ll> a(n);
	rep(i, n) cin >> a[i];
	vector<ll> s(n + 1);
	rep(i, n) s[i + 1] = s[i] + a[i];
	unordered_set<ll> st;
	rep(i, n + 1) st.insert(s[i]);

	rep(i, n + 1)
	{
		ll ns = s[i];
		rep(j, 3)
		{
			ns += b[j];
			if (!st.count(ns))
				break;
			if (j == 2)
			{
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
	return (0); 
}
