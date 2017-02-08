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
	ll t, X, Y, Z, x, y, z, i, j, k, tmp, ans;
	ll p, q, r, s;
	cin >> t;

	while (t--) {
		cin >> X >> Y >> Z;
		cin >> p >> q >> r >> s;

		ans = 0;
		for (i = 0; i < 1001; ++i) {
			for (j = 0; j < 1001; ++j) {
				tmp = 0;
				x = X; y = Y; z = Z;
				if (i <= x && i+j <= y && j <= z) {
					x -= i;
					y -= (i+j);
					z -= j;
					tmp = i*p + j*q;
					k = min(x, min(y, z));
					tmp += max((x+y+z)*s, k*r + (x+y+z-k-k-k)*s);
					ans = max(ans, tmp);
				}
			}
		}	
		cout << ans << endl;
	}

	return 0;
}
