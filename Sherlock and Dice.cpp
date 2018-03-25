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
#define fi first
#define sc second
#define deb 0

ld dp[60][10005];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	int t, n, m, i, j, k, x, y, z, N, M, K;
	cin >> t;
	while (t--) {
		cin >> M >> N >> K;
		memset(dp, 0, sizeof(dp));
		for (i = 1; i <= N; ++i) dp[1][i] = 1.0/N;
		for (m = 2; m <= M; ++m) {
			for (k = 1; k <= K; ++k) {
				for (n = 1; n <= N; ++n) {
					if (k-n < 0) break;
					dp[m][k] += dp[m-1][k-n];
				}
				dp[m][k] /= N;
			}
		}
		y = 0;
		if (dp[M][K] == 0) {
		    printf("0.000 0\n");
		    continue;
		}
		while (dp[M][K] < 1) {
			dp[M][K] *= 10;
			y += 1;
		}
		printf("%.3LF %d\n", dp[M][K], y);
	}

	return 0;
}
