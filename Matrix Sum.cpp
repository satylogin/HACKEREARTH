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

ll arr[1001][1001];

int main()
{
	int n, m, i, j, k, q, x, y;
	sci(n); sci(m);
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= m; ++j) {
			scl(arr[i][j]);
		}
	}

	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= m; ++j) {
			arr[i][j] += arr[i][j-1];
		}
		for (j = 1; j <= m; ++j) {
			arr[i][j] += arr[i-1][j];
		}
	}

	sci(q);
	while (q--) {
		sci(x); sci(y);
		printf("%lld\n", arr[x][y]);
	}

	return 0;
}
