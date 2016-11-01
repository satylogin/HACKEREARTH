#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int main()
{
	ll i, a, b, n, c;
	cin >> a >> b >> n;
	if (n == 1) {
		cout << a << endl;
	} else if (n == 2) {
		cout << b << endl;
	} else {
		for (i = 3; i <= n; ++i) {
			c = a + b;
			a = b;
			b = c;
		}
		cout << c << endl;
	}
	
	return 0;
}
