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

ll n, lim, arr[15];
ll dp[15][1<<15], inf;

ll get(ll lst, ll mask)
{
	if (mask == lim) return 0;
	if (dp[lst][mask] != -1) return dp[lst][mask];
	ll x = 0;
	for (ll i = 0; i < n; ++i) {
		if (mask&(1<<i)) continue;
		x = max(x, __gcd(arr[lst], arr[i]) + get(i, mask|(1<<i)));
	}
	return (dp[lst][mask] = x);
}

int main()
{
	ll i, j, k;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	memset(dp, -1, sizeof(dp));
	lim = (1<<n)-1;
	k = 0;
	for (i = 0; i < n; ++i) {
		k = max(k, get(i,1<<i));
	}	
	cout << k << endl;

	return 0;
}
