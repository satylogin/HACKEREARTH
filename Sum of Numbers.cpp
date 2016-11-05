#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int arr[1000];

int main()
{
	int t, n, a, b, c, x, y, z, i, j, k, lim;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		cin >> a;
		if (a == 0) {
			cout << "YES" << endl;
			continue;
		}
		
		lim = (1 << n) - 1;
		
		k = 0;
		for (i = 1; i <= lim; ++i) {
			k = 0;
			for (j = 0; j < n; ++j) {
				if ((1<<j)&i) {
					k += arr[j];
				}
			}
			if (k == a) {
				break;
			}
		}
		
		if (k == a) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	} 
	
	return 0;
}
