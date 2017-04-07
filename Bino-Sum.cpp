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

int ans[1001][1001];

int main()
{
	int i, j, k, a, b, c, t, n;
	ans[0][0] = 1;
	for (i = 1; i < 1001; ++i) {
		for (j = 0; j <= i; ++j) {
			if (j == 0) {
				ans[i][j] = 1;
			} else {
				ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
				if (ans[i][j] >= MOD) ans[i][j] -= MOD;
			}
		}
	}
	for (i = 1; i <= 1000; ++i) {
		for (j = 1; j <= 1000; ++j) {
			ans[i][j] += ans[i][j-1];
			if (ans[i][j] >= MOD) ans[i][j] -= MOD;
		}
	}

	sci(t);
	while (t--) {
		sci(n); sci(i);
		printf("%d\n", ans[n][i]);
	}

	return 0;
}
