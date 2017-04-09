#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)

int c[1001], f[1001], ks[101][10001], cost[101][10001];

int main()
{
	int t, n, m, i, j, k, x, y;
	sci(t);
	while (t--) {
		sci(n); sci(m);
		for (i = 0; i < n; ++i) {
			sci(f[i]); sci(c[i]);
		}

		for (i = 0; i <= n; ++i) {
			for (j = 0; j <= m; ++j) {
				if (i == 0 || j == 0) {
					ks[i][j] = m;
					cost[i][j] = 0;
				} else if (j < c[i-1]) {
					ks[i][j] = ks[i-1][j];
					cost[i][j] = cost[i-1][j];
				} else {
					if (ks[i-1][j] < ks[i-1][j-c[i-1]] + f[i-1] - c[i-1]) {
						ks[i][j] = ks[i-1][j-c[i-1]] + f[i-1] - c[i-1];
						cost[i][j] = cost[i-1][j-c[i-1]] + c[i-1];
					} else if (ks[i-1][j] > ks[i-1][j-c[i-1]] + f[i-1] - c[i-1]) {
						ks[i][j] = ks[i-1][j];
						cost[i][j] = cost[i-1][j];
					} else {
						ks[i][j] = ks[i-1][j];
						cost[i][j] = min(cost[i-1][j], cost[i-1][j-c[i-1]] + c[i-1]);
					}
				}
			}
		}
		
		cout << cost[n][m] << " " << ks[n][m] << endl;
	}

	return 0;
}
