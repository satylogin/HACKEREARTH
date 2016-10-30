#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

ll fact[100001], par[100001], size[100001];

ll find_par(ll x) {
	if (par[x] == x) return x;
	return (par[x] = find_par(par[x]));
}

void uni(ll x, ll y) {
	ll px = find_par(x), py = find_par(y);
	if (px != py) {
		par[px] = py;
		size[py] += size[px];
	}
}

int main() {
	ll i, ans, x, y, n, m;
	fact[0] = 1;

	for (i = 1; i <= 100000; ++i) fact[i] = (i * fact[i-1]) % MOD;
	for (i = 1; i <= 100000; ++i) par[i] = i;
	for (i = 0; i <= 100000; ++i) size[i] = 1;

	cin >> n >> m;
	while (m--) {
		cin >> x >> y;
		uni(x, y);
	}

	ans = 1;
	for (i = 0; i < n; ++i) {
		if (par[i] == i) {
			ans = (ans * fact[size[i]]) % MOD;
		}
	}
	cout << ans << endl;

	return 0;
}
