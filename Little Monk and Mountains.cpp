#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<ll, ll>

pii arr[100001];
ll val[100001];

int main()
{
	ll n, q, i, j, k, a, b, c, x, y, z;
	cin >> n >> q;
	for (i = 0; i < n; ++i) {
	    cin >> a >> b;
	    arr[i] = mkp(a, b-a+1);
	}
	for (i = 0; i < n; ++i) {
	    val[i] = arr[i].second;
	    if (i > 0) val[i] += val[i-1];
	}
	while (q--) {
	    cin >> x;
	    i = lower_bound(val, val+n, x) - val;
	    if (i != 0) {
	        x -= val[i-1];
	    }
	    cout << arr[i].first + x - 1 << endl;
	}
	
	return 0;
}
