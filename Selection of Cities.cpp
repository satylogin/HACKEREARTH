#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll pow_(ll a, ll b)
{
	ll ans = 1;
	a %= MOD;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % MOD;
		}
		a = (a * a) % MOD;
		b >>= 1;
	}
	return ans;
}

int main()
{
	int t;
	ll n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (pow_(2ll, n) - 1 + MOD) % MOD << endl;
	}
	
	return 0;
}
