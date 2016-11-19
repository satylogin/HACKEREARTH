#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[1000005];
ll fact[1000006], mark[26];

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

int main()
{
	ll i, j, k, t, a, b;
	ll ans;
	fact[0] = 1;
	for (i = 1; i <= 1000005; ++i) {
		fact[i] = (i * fact[i-1]) % MOD;
	}
	
	cin >> t;
	while (t--) {
		a = b = 0;
		for (i = 0; i < 26; ++i) {
			mark[i] = 0;
		}
		scanf("%s", str);
		for (i = 0; str[i]; ++i) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
				a++;
			} else {
				b++;
			}
			mark[str[i]-'a']++;
		}
		
		if (a > b+1) {
			cout << -1 << endl;
		} else {
			ans = (fact[b] * fact[b+1]) % MOD;
			ans = (ans * inv(fact[b+1-a])) % MOD;
			for (i = 0; i < 26; ++i) {
				ans = (ans * inv(fact[mark[i]])) % MOD;
			}
			cout << ans << endl;
		}
	}
	
	return 0;
}
