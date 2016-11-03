#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int main()
{
	int t, x, y, n, m, i, j, k, a, b, c;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (n == 1) {
			if (k <= 9) {
				cout << k << endl;
			} else {
				cout << -1 << endl;
			}
		} else {
			if (k > 81) {
				cout << -1 << endl;
			} else {
				a = 0;
				x = 1;
				while (a+9 < k) {
					a += 9;
					x++;
				}
				k -= a;
				k--;
				if (x <= k) {
					k++;
				}
				y = k;
				for (i = 1; i <= n; ++i) {
					if (i&1) cout << x;
					else cout << y;
				}
				cout << endl;
			}
		}
	}

	return 0;
}
