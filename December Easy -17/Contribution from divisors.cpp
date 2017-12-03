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
#define fi first
#define sc second
#define deb 0

ll F[1000001], G[1000001];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	ll i, j, k, x, y, z, n;
	for (i = 1; i <= 1000000; ++i) {
		x = i;
		while (x) {
			y = x % 10;
			x /= 10;
			if (y&1) F[i] += y;
		}
	}
	for (i = 1; i <= 1000000; ++i) {
		for (j = i; j <= 1000000; j += i) {
			G[j] += F[i];
		}
	}
	cin >> n;
	while (n--) {
		cin >> x;
		cout << G[x] << endl;
	}

	return 0;
}
