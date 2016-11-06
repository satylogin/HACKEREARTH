#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int sieve[100001], is_prime[100001], mark[100001];

int main()
{
	int t, n, i, j, k, a, b, c, x, y, z;
	
	for (i = 2; i <= 100000; ++i) {
		if (sieve[i] == 0) {
			is_prime[i] = 1;
			for (j = i; j <= 100000; j += i) {
				sieve[j] = i;
			}
		}
	}
	
	cin >> t;
	while (t--) {
		cin >> n;
		b = n;
		while (n != 1) {
			x = sieve[n];
			n /= x;
			for (i = x; i <= b; i += x) {
				mark[i] = 1;
			}
		}
		
		c = 0;
		for (i = 1; i <= b; ++i) {
			if (mark[i] == 1) {
				c++;
			}
			mark[i] = 0;
		}
		
		//cout << b << " " << c << endl;
		c = b - c;
		//cout << c << endl;
		if (is_prime[c]) {
			cout << "TRUE" << endl;
		} else {
			cout << "FALSE" << endl;
		}
	}
	
	return 0;
}
