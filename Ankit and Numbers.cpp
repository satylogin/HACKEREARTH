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
	ll t, n, m, lim, i, j, k, ans = 0;
	
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		ll x = (ll)pow(2, n-1);
		for (i = 1; i <= n; ++i) {
			ans += i * x;
		}
		cout << ans << endl;
	}
	
	return 0;
}
