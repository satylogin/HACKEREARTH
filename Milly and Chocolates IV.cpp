#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

ll p[1001], t[1001][1001];

int main()
{
	ll T, x, n, m, k, i, j, ans, tm, cur;

	cin >> T;
	while (T--) {
		cin >> n >> k >> m;
		ans = -1;
		tm = MOD;
		tm *= MOD;

		for (i = 1; i <= n; ++i) {
			cin >> p[i];
		}

		for (i = 1; i <= n; ++i) {
			cur = 0;
			for (j = 0; j < p[i]; ++j) {
				cin >> x;
				cur += x;
			}
			cur += k*p[i] + m*(p[i]-1);
			if (cur < tm) {
				tm = cur; ans = i;
			}
		}

		cout << ans << " " << tm << endl;
	}

	return 0;
}
