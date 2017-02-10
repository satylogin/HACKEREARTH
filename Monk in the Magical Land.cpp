#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int arr[101], mark[101], keys[21], cost[101];
vector <int> v[101];

int main()
{
	int t, n, m, lim, i, j, k, a, b, tmp, ans, c, x, y, z;

	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		for (i = 0; i < n; ++i) {
			cin >> keys[i];
			v[i].clear();
		}

		for (i = 0; i < m; ++i) {
			cin >> arr[i];
			for (j = 0; j < n; ++j) {
				x = __gcd(arr[i], keys[j]);
				if (x != 1) v[j].pb(i);
			}
		}

		for (i = 0; i < m; ++i) {
			cin >> cost[i];
		}

		lim = (1<<n);
		ans = 0;
		for (i = 1; i < lim; ++i) {
			x = __builtin_popcount(i);
			if (x == k) {
				memset(mark, 0, sizeof(mark));
				tmp = 0;
				for (j = 0; j < n; ++j) {
					if (i&(1<<j)) {
						for (a = 0; a < v[j].size(); ++a) {
							if (mark[v[i][a]] == 0) {
								mark[v[i][a]] = 1;
								tmp += cost[v[i][a]];
							}
						}
					}
				}
				ans = max(ans, tmp);
			}
		}

		cout << ans << endl;
	}

	return 0;
}
