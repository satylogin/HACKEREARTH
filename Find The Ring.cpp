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
	int t, n, x;
	cin >> t;
	while (t--) {
		cin >> x >> n;
		if (n == 0) {
			cout << x << endl;
			continue;
		}
		if (x != 1) {
			x = 1;
			n--;
		}
		if (n & 1) {
			cout << 0 << endl;
		} else {
			cout << 1 << endl;
		}
	}
	
	return 0;
}
