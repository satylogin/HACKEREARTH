#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int ans[10001], val[101];

int main()
{
	int t, n, m, i, j, k, a, b, c, x, y, z;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (i = 0; i < n; ++i) {
			cin >> val[i];
		}
		sort(val, val+n);
		ans[0] = 0;
		for (i = 1; i <= m; ++i) {
			ans[i] = 0;
			for (j = 0; j < n && val[j] <= i; ++j) {
				if (ans[i-val[j]] == 0) {
					ans[i] = 1;
					break;
				}
			}
		}
		if (ans[m]) {
			cout << "Little Deepu" << endl;
		} else {
			cout << "Kate" << endl;
		}
	}

	return 0;
}
