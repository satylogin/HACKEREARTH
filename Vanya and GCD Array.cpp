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

ll n, arr[1001], dp[501][101][101];

ll get(ll i, ll last, ll g)
{
	if (i == n) {
		if (g == 1) return 1ll;
		else return 0;
	}

	if (dp[i][last][g] != -1) return dp[i][last][g];

	dp[i][last][g] = get(i+1, last, g);
	if (arr[i] > last) {
		dp[i][last][g] += get(i+1, arr[i], __gcd(g, arr[i]));
		if (dp[i][last][g] >= MOD) dp[i][last][g] -= MOD;
	}
	return dp[i][last][g];
}

int main()
{
	ll i, j, k, ans;
	cin >> n;
	ans = 0;
	memset(dp, -1, sizeof(dp));
	for (i = 0; i < n; ++i) {
		scl(arr[i]);
	}
	for (i = 0; i < n; ++i) {
		ans += get(i+1, arr[i], arr[i]);
		if (ans >= MOD) ans -= MOD;
	}
	cout << ans << endl;

	return 0;
}
