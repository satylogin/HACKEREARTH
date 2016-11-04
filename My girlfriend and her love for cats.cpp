#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%lld", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll c[1000000], s[1000000];

int main()
{
	ll i, n, ans = 0;
	scan(n);
	
	for (i = 0; i < n; ++i) {
		scan(c[i]);
	}
	sort(c, c+n);
	
	for (i = 0; i < n; ++i) {
		scan(s[i]);
	}
	sort(s, s+n);
	
	for (i = 0; i < n; ++i) {
		ans += c[i] * s[i];
	}
	
	cout << ans << endl;
	
	return 0;
}
