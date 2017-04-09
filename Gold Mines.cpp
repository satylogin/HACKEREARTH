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

ll dp[1001][1001];

int main()
{
	int r, c, q, i, j, k, x1, y1, x2, y2;
	sci(r); sci(c);
	for (i = 1; i <= r; ++i) {
		for (j = 1; j <= c; ++j) {
			scl(dp[i][j]);
			dp[i][j] += dp[i][j-1] - dp[i-1][j-1] + dp[i-1][j];
		}
	}

	sci(q);
	while (q--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		printf("%lld\n", dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1]);
	}

	return 0;
}
