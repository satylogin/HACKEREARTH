#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int main()
{
	ll t, n, ans;
	cin >> t;
	while (t--) {
		cin >> n;
		n %= MOD;
		ans = (n * n) % MOD;
		ans = (ans * 2) % MOD;
		ans = (ans - n + MOD) % MOD;
		cout << ans << endl;
	}
	
	return 0;
}
