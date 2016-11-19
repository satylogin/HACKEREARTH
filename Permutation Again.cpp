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
	int t;
	ll n, x, y, z;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n & 1) {
			x = n - 2;
			y = x / 2;
			z = (y * (y + 1));
			z += y + 1;
			z *= 2;
			z -= 1;
			z += n-1;
		} else {
			x = n - 2;
			y = x / 2;
			z = (y * (y + 1)) * 2;
			z += n-1;
		}
		cout << z << endl;
	}
	
	return 0;
}
