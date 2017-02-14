#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x)

pair <ll, ll> arr[100001];

int main()
{
	ll i, x, y, a, b, s, e, n, ans = 0;

	scan(n); scan(s); scan(e);
	for (i = 0; i < n; ++i) {
		scan(x); scan(y);
		arr[i] = mkp(max(1ll, x-y), x+y);
	}

	sort(arr, arr+n);

	for (i = 0; i < n; ++i) {
		x = arr[i].first;
		y = arr[i].second;
		if (x >= s && x <= e) {
			ans += (x-s);
			s = x;
		} else if (x > e) {
			ans += (e-s);
			s = e;
		}
		s = max(s, min(y, e));
	}
	ans += (e-s);

	printf("%lld\n", ans);

	return 0;
}
