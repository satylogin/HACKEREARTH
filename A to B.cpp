#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll inv(ll a)
{
	ll ans = 1, b = MOD - 2;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % MOD;
		}
		b >>= 1;
		a = (a * a) % MOD;
	}
	
	return ans;
}

ll arr[100001];

int main()
{
	int n, i, j, k, x, y, z = 0;
	ll prod, a, b, c;
	cin >> n;
	
	prod = 1ll;
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
		if (arr[i] == 0) z++;
		else prod = (prod * arr[i]) % MOD;
	}
	
	cin >> k;
	while (k--) {
		cin >> j;
		if (j == 0) {
			cin >> x >> y;
			if (arr[x] == 0) {
				z--;
				arr[x] = y;
				if (arr[x] == 0) z++;
				else prod = (prod * arr[x]) % MOD;
			} else {
				prod = (prod * inv(arr[x])) % MOD;
				arr[x] = y;
				if (arr[x] == 0) z++;
				else prod = (prod * arr[x]) % MOD;
			}
		} else {
			cin >> x;
			if (arr[x] == 0 && z == 1) {
				cout << prod << endl;
			} else {
				if (z == 0) cout << (prod * inv(arr[x])) % MOD << endl;
				else cout << 0 << endl;
			}
		}
	}
	
	return 0;
}
