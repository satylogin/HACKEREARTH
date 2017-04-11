#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)

ll p[20], w[20];

int main()
{
	ll d, n, m, i, j, k, tc, mw, mc, lim, ans, tmp, wtmp;
	scl(d);
	tc = 1;
	while (d--) {
		printf("For Day #%lld:\n", tc++);
		scl(n);
		for (i = 0; i < n; ++i) {
			scl(p[i]); scl(w[i]);
		}
		scl(mw); scl(mc);
		lim = 1<<n;
		ans = 0;
		for (i = 1; i < lim; ++i) {
			if (__builtin_popcount(i) > mc) continue;
			wtmp = tmp = 0;
			for (j = 0; j < n; ++j) {
				if (i&(1<<j)) {
					tmp += p[j];
					wtmp += w[j];
				}
			}
			if (wtmp <= mw) {
				ans = max(ans, tmp);
			}
		}
		if (ans == 0) ans = -1;
		printf("%lld\n", ans);
	}

	return 0;
}
