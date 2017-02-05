#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

ll fre[1001], ans[100001];
pair <ll, pair<ll, ll> > p[100001];

int main()
{
	ll i, j, k, n, m, a, b, c, d;

	cin >> n >> m;
	
	for (i = 0; i < n; ++i) {
	    cin >> p[i].first >> p[i].second.first;
	    p[i].second.second = i;
	}
	
	sort(p, p+n);
	
	for (i = 0; i < n; ++i) {
	    a = p[i].first;
	    b = p[i].second.first;
		c = p[i].second.second;
		for (j = 1; j <= m; ++j) {
		    if (fre[j] <= a) {
		        fre[j] = a+b;
		        ans[c] = j;
		        break;
		    }
		}
		if (j == m+1) ans[c] = -1;
		
	}
	for (i = 0; i < n; ++i) cout << ans[i] << " ";
	puts("");

	return 0;
}
