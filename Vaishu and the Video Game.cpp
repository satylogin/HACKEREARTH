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

ll pow_[22], l, n, m, arr[51];
ll dp[1<<20], lim, inf;

ll get(ll mask)
{
	if (mask == lim) return 0;
	if (dp[mask] != -1) return dp[mask];

	dp[mask] = inf;
	for (ll i = 0; i < l; ++i) {
		if ((arr[i]|mask) == mask) continue;
		dp[mask] = min(dp[mask], 
			pow_[__builtin_popcount((arr[i]|mask)^mask)] + get(arr[i]|mask));
	}
	return dp[mask];
}

int main()
{
	ll i, j, k, a, b, c, x, y, z;
	inf = MOD;
	inf *= MOD;
	cin >> l >> n >> m;
	for (i = 1; i <= 20; ++i) {
		pow_[i] = 1;
		for (j = 1; j <= m; ++j) {
			pow_[i] *= i;
		}
	}

	for (i = 0; i < l; ++i) {
		cin >> m;
		for (j = 0; j < m; ++j) {
			cin >> x;
			arr[i] |= (1<<x);
		}
	}

	lim = (1<<n)-1;
	memset(dp, -1, sizeof(dp));
	cout << get(0ll) << endl;

	return 0;
}
