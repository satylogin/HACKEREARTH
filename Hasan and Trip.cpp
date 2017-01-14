#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

double ans[3001];
ll x[3001], y[3001];
double f[3001];

int main()
{
	ll i, j, t, n, m, a, b;

	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> x[i] >> y[i] >> f[i];
		ans[i] = -DBL_MAX;
	}

	ans[0] = f[0];
	for (i = 1; i < n; ++i) {
	    for (j = 0; j < i; ++j) {
	        ans[i] = max(ans[i], ans[j] - sqrt((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i])));
	    }
	    ans[i] += f[i];
	}
	
	printf("%0.6lf\n", ans[n-1]);

	return 0;
}
