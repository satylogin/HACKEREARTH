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
	ll q, n, t;
	cin >> q;
	while (q--) {
		cin >> n >> t;
		while (t--) {
			if (n&1) {
				n -= ((n+1)/2);
			} else {
				n -= (n / 2);
			}
			n -= (n/4);
		}
		cout << n << endl;
	}
	
	return 0;
}
