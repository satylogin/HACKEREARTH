#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second

bool is_prime(int x)
{
	if (x < 2) return false;
	for (int i = 2; i*i <= x; ++i) {
		if ((x%i) == 0) return false;
	} return true;
}

int main()
{
	int n, a, b, i, j;
	cin >> n;
	for (a = n; !is_prime(a); ++a);
	for (b = n; b > 0 && !is_prime(b); --b);
	i = MOD;
	if (is_prime(a)) i = min(i, a-n);
	if (is_prime(b)) i = min(i, n-b);
	cout << i << endl;

	return 0;
}
