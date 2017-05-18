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

int arr[100001];
vector <int> p;

void sieve() 
{
	for (int i = 2; i*i < 10000; ++i)
		if (arr[i] == 0) 
			for (int j = i*i; j < 10000; j += i)
				arr[j] = 1;
	for (int i = 2; i < 10000; ++i)
		if (!arr[i]) p.pb(i);
}

int main()
{
	sieve();
	int n, i, j, k, a, b, c, x, y, z;
	sci(n);
	while (n--) {
		sci(x);
		ll ans = 1;
		for (i = 0; i < p.size() && p[i] <= x; ++i) {
			y = 0;
			while ((x%p[i]) == 0) {
				x /= p[i];
				y++;
			}
			ans *= (y+1);
		}
		if (x > 1) ans *= 2;
		cout << ans << endl;
	}

	return 0;
}
