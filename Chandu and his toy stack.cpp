#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x);

ll a[100001], b[100001];

int main()
{
	ll t, n, x, y, i, j, k;
	ll ans;
	cin >> t;
	while (t--) {
		scan(n);
		scan(x);
		scan(y);
		for (i = 0; i < n; ++i) {
			scan(a[i]);
			scan(b[i]);
		}
		sort(a, a+n);
		sort(b, b+n);
		ans = 0;
		for (i = 0; i < n; ++i) {
			if (a[i] < b[i]) {
				ans += x * (b[i] - a[i]);
			} else {
				ans += y * (a[i] - b[i]);
			}
		}
		printf("%lld\n", ans);
	}

	return 0;
}
