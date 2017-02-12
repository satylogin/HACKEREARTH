#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x)
 
ll arr[100001];
 
int main()
{
	ll x, ans, i, n;
 
	scan(n);
	for (i = 0; i < n; ++i) {
		scan(arr[i]);
	}
 
	x = 1;
	ans = 0;
	for (i = n-1; i >= 0; --i) {
		ans = ans + (arr[i]*x) % MOD;
		if (ans >= MOD) ans -= MOD;
		x = x + (arr[i] * x) % MOD;
		if (x >= MOD) x -= MOD;
	}
 
	cout << ans << endl;
 
	return 0;
}
