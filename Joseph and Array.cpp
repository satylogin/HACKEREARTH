#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll prime[1000008], mark[1000008], fact[10000008];

ll inv(ll a)
{
	ll ans = 1, b = MOD - 2;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % MOD;
		}
		a = (a * a) % MOD;		
		b >>= 1;
	}
	return ans;
}

ll ncr(ll n, ll r)
{
	return (fact[n] * ((inv(fact[r]) * inv(fact[n-r])) % MOD)) % MOD;
}

int main()
{
	ll ans, i, j, k, a, b, c, x, y, n, m;

	fact[0] = fact[1] = 1;
	
	for (i = 2; i <= 10000000; ++i) {
		fact[i] = ((ll) i * fact[i-1]) % MOD;
	}
	
	for (i = 2; i <= 1000007; ++i) {
		if (prime[i] == 0) {
			for (j = i; j <= 1000007; j += i) {
				prime[j] = i;
			}
		}
	}
	
	cin >> n >> k;
	while (n--) {
		scanf("%lld", &x);
		while (x != 1) {
			mark[prime[x]]++;
			x /= prime[x];
		}
	}
	
	ans = 1;
	for (i = 2; i <= 1000000; ++i) {
		ans = (ans * ncr(k + mark[i] - 1, k - 1)) % MOD;
	}
	cout << ans << endl;
	
	return 0;
}
