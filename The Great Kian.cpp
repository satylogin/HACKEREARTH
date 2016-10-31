#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%lld", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll arr[100010];

int main()
{
	ll t, n, i, x, a, b, c;
	scan(n);
	for (i = 0; i < n; ++i) scan(arr[i]);
	a = b = c = 0;
	for (i = 0; i < n; i += 3) a += arr[i];
	for (i = 1; i < n; i += 3) b += arr[i];
	for (i = 2; i < n; i += 3) c += arr[i];
	printf("%lld %lld %lld\n", a, b, c);
	
	return 0;
}
