#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int dp[1001][1001], a[1001], b[1001];

int main()
{
	int t, n, m, i, j, k, x, y;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1; i <= n; ++i) {
			cin >> x >> y;
			a[x] = b[y] = i;
		}
		for (i = 1; i <= n; ++i) {
			for (j = 1; j <= n; ++j) {
				if (a[i] == b[j]) {
					dp[i][j] = 1 + dp[i-1][j-1];
				} else {
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		cout << dp[n][n] << endl;
	}

	return 0;
}
