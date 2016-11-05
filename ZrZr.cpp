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
	ll t, n, cnt, x;
	scan(t);
	while (t--) {
		scan(n);
		cnt = 0;
		x = 1;
		while (x < n) {
			x *= 5;
			cnt += n/x;
		}
		printf("%lld\n", cnt);
	}
	
	return 0;
}
