#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int	main(void)
{
	int n, m;
	cin >> n >> m;
	vector adj(n, vector<bool>(n));
	rep (i, m)
	{
		int u, v;
		cin >> u >> v;
		u -= 1, v -= 1;
		adj[u][v] = adj[v][u] = true;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (adj[i][j] and adj[j][k] and adj[k][i])
					ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

/*
int	main(void)
{
	int n, m;
	cin >> n >> m;
	vector adj(n, vector<bool>(n));
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        u -= 1, v -= 1;
        adj[u][v] = adj[v][u] = true;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (adj[i][j] and adj[j][k] and adj[k][i]) {
                    ans += 1;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
*/

/*
bool	exist_same_value(vector<int> *a, vector<int> *b, int i, int j) {
	if (a[i] == a[j] || a[i] == b[j])
		return true;
	else if (b[i] == a[j] || b[i] == b[j])
		return true;
	return false;
}

void	want_last_pair(vector<int> *last_pair, vector<int> *a, vector<int> *b, int i,  int j) {
	if (a[i] == a[j])
	{
		last_pair[0] = b[i];
		last_pair[1] = b[j];
	}
	else if (a[i] == b[j])
	{
		last_pair[0] = b[i];
		last_pair[1] = a[j];
	}
}

int	exist_last_pair(vector<int> *last_pair, vector<int> *a, vector<int> *b, int m)
{
	rep(i, m)
	{
		if ((a[i] == last_pair[0] && b[i] == last_pair[1]) || (a[i] == last_pair[1] && b[i] == last_pair[0]))
		{
			return i;
		}
	}
	return 0;
}

int	main(void)
{
	int	n, m, count = 0;
	cin >> n >> m;
	vector<int> a(m), b(m);
	vector<bool> check(m); 
	vector<int> last_pair(2);

	rep(i, m) cin >> a[i] >> b[i];
	rep(i, m) check[i] = false;
	rep(i, m)
	{
		rep(j, m)
		{
			if (j == i || check[i] == true)
			{
				printf("continue i %d j %d", i, j);
				continue;
			}
			else if (exist_same_value(&a, &b, i, j))
			{
				want_last_pair(&last_pair, &a, &b, i, j);
				int	exist = exist_last_pair(&last_pair, &a, &b, m);
				if (exist)
				{
					check[exist] = true;
					check[i] = true;
					check[j] = true;
					count++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
*/

// xyで１セットにすることってできないのかな？？

// 3 3		3 3
// 1 2		2 1
// 1 3		3 2
// 3 2		1 3
// OK		OK