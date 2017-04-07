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

int ks[1001][1001], w[1001], c[1001];

int main()
{
	int t, n, m, i, j, k;
	sci(t);
	while (t--) {
		sci(n); sci(m);
		for (i = 0; i < n; ++i) sci(w[i]);
		for (i = 0; i < n; ++i) sci(c[i]);
		for (i = 0; i <= n; ++i) {
			for (j = 0; j <= m; ++j) {
				if (i == 0 || j == 0) ks[i][j] = 0;
				else if (j-w[i-1] < 0) {
					ks[i][j] = ks[i-1][j];
				} else {
					ks[i][j] = max(ks[i-1][j], c[i-1] + ks[i-1][j-w[i-1]]);
				}
			}
		}
		printf("%d\n", ks[n][m]);
	}

	return 0;
}
