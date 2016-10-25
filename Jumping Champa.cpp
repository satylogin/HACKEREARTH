#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x)

int arr[100001];

int main()
{
	ll t, n, m, i, j, k, a, b, c;
	scan(t);
	while (t--) {
		scan(n); scan(k);
		for (i = 0; i < n; ++i) {
			scan(arr[i]);
		}
		sort(arr, arr+n);
		c = 0;
		for (i = 1; i < n; ++i) {
			c += k*(arr[i]-arr[i-1]);
		}
		printf("%lld\n", c);
	}

	return 0;
}
