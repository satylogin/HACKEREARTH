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

ll dp[100001][4][1<<4];
ll mp[100001];

int main()
{
	ll n, m, i, j, k, a, b, c, x, y, z, dig;
	cin >> n;
	for (i = 1; i <= n; ++i) {
		cin >> a;
		while (a) {
			x = a%10;
			a /= 10;
			if (x == 2) mp[i] |= (1<<0);
			if (x == 3) mp[i] |= (1<<1);
			if (x == 5) mp[i] |= (1<<2);
			if (x == 7) mp[i] |= (1<<3);
		}
	}

	for (i = 1; i <= n; ++i) {
		for (dig = 1; dig < 4; ++dig) {
			for (j = 0; j < 16; ++j) {
				dp[i][dig][j&mp[i]] += dp[i-1][dig-1][j];
			}
		}
		dp[i][1][mp[i]]++;
		for (dig = 1; dig < 4; ++dig) {
			for (j = 0; j < 16; ++j) {
				dp[i][dig][j] += dp[i-1][dig][j];
			}
		}		
	}
	x = 0;
	for (i = 1; i < 16; ++i) {
		x += dp[n][3][i];
	}
	cout << x << endl;

	return 0;
}
