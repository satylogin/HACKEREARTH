#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#include <string>
#include <cstring>
#include <set>
#include <cstdlib>
#include <cmath>

using namespace std;

#define ll long long int
#define MOD 1000000007

ll ans[10000000];

ll get_max(ll a, ll b)
{
	if (a > b) return a;
	return b;
}

ll get_ans(ll x)
{
	if (x < 12) {
		return x;
	} else if (x < 10000000) {
		if (ans[x]) {
			return ans[x];
		} else {
			ll a, b, c;
			a = x / 2;
			b = x / 3;
			c = x / 4;
			return (ans[x] = get_max(x, get_ans(a) + 
					get_ans(b) + get_ans(c)));
		}
	} else {
		ll a, b, c;
		a = x / 2;
		b = x / 3;
		c = x / 4;
		return get_max(x, get_ans(a) + get_ans(b)
				+ get_ans(c));
	}
}

int main()
{
	//freopen("input", "rb", stdin);
	//freopen("output", "w", stdout);

	ll n, m, a;
	while (scanf("%lld", &n) != EOF) {
		printf("%lld\n", get_ans(n));
	}

	return 0;
}
