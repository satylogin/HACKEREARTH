#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

ll A[200001], B[200001];

int main()
{
	ll ans, n, i, j, k;

	scanf("%lld", &n);
	for (i = 0; i < n; ++i) {
		scanf("%lld %lld", A+i, B+i);
	}
	sort(A, A+n);
	sort(B, B+n);

	for (i = n-1; i > 0; --i) {
		A[i] -= A[i-1];
		B[i] -= B[i-1];
	}

	k = n-1;
	for (i = 1; i < n; ++i) {
		ans += ((k*A[i]*i) % MOD);
		ans %= MOD;
		ans += ((k*B[i]*i) % MOD);
		ans %= MOD;
		k--;
	}

	printf("%lld\n", ans);

	return 0;
}
