#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

map <int, int> mp;
map <int, int> :: iterator it;
int prime[1000001], ans[1000001];

int main()
{
	int t, n, m, start, mid, end, i, j, k, x, y, a, b;	
	
	ans[1] = 1;
	for (i = 2; i <= 1000000; ++i) {
		if (ans[i] == 0) {
			for (j = i; j <= 1000000; j += i) {
				y = j;
				x = 0;
				while ((y%i) == 0) {
					y /= i;
					x++;
				}
				if (ans[j] == 0) ans[j] = 1;
				ans[j] *= (x + 1);
			}
		}
	}
	
	for (i = 1; i <= 1000000; ++i) {
		prime[i] = ans[i];
	}
	
	// for (i = 1; i <= 8; ++i) {
	// 	cout << ans[i] << " ";
	// }  cout << endl;
	
	cin >> t >> n;
	sort(ans, ans+n+1);
	
	// for (i = 1; i <= 8; ++i) {
	// 	cout << ans[i] << " ";
	// } cout << endl;
	
	while (t--) {
		cin >> k;
		//cout << k << " " << prime[k] << endl;
		k = prime[k];
		x = -1;
		start = 1;
		end = n;
		while (start <= end) {
			mid = (start + end) >> 1;
			if (ans[mid] >= k) {
				x = mid;
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		cout << x-1 << endl;
	}
	
	return 0;
}
