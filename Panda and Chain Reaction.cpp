#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000003
#define pii pair<int, int>

ll fact[1000005];

int main()
{
	ll i, j, k, t, n, x;
	fact[0] = 1;
	
	for (i = 1; i <= MOD; ++i) {
		fact[i] = (i * fact[i-1]) % MOD;
	}
	
	cin >> t;
	while (t--) {
		cin >> n >> x;
		if (n >= MOD) {
			cout << 0 << endl;
		} else {
			cout << (x * fact[n]) % MOD << endl;
		}
	}
	
	return 0;
}
