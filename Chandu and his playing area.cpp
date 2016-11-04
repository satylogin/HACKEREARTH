#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%lld", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int main()
{
	ll t, x, y, z;
	scan(t);
	
	while (t--) {
		scan(x);
		x /= 2;
		y = x / 2;
		x -= y;
		printf("%lld\n", x * y);
	}
	
	return 0;
}
