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

int lim, dp[12][12][1<<12], n;
int arr[12], p[12];

int get(int sli, int li, int mask)
{
	int y = __builtin_popcount(mask);
	if (y == n) return 0;
	if (dp[sli][li][mask] != -1) {
		return dp[sli][li][mask];
	}
	int x = MOD, i;
	for (i = 0; i < n; ++i) {
		if (mask&(1<<i)) continue;
		x = min(x, (arr[i] ^ arr[li] ^ arr[sli])*p[y] + get(li, i, mask|(1<<i)));
	}
	return dp[sli][li][mask] = x;
}

int main()
{
	int t, i, j, k, x, y, z, mask;
	sci(t);
	while (t--) {
		sci(n);
		for (i = 0; i < n; ++i) {
			sci(arr[i]); 
		}
		for (i = 0; i < n; ++i) {
			sci(p[i]);
		}
		lim = (1<<n)-1;
		x = MOD;
		memset(dp, -1, sizeof(dp));
		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				if (i == j) continue;
				mask = (1<<i) | (1<<j);
				x = min(x, get(i, j, mask));
			}
		}
		cout << x << endl;
	}

	return 0;
}
