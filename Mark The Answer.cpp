#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll arr[1000001], tmp[1000001];

int main()
{
	ll n, k, i, j, a, b, c, x, y, z;	
	cin >> n >> k;
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	
	for (i = 1; i <= n; ++i) {
		if (arr[i] <= k) {
			tmp[i] = 1 + tmp[i-1];
		}
	}
	
	for (i = n; i > 0; --i) {
		if (tmp[i] != 0) {
			tmp[i] = max(tmp[i], tmp[i+1]);
		}
	}
	
	for (i = 1; i <= n; ++i) {
		if (tmp[i] == 0) {
			break;
		}
	}
	
	if (i == n+1) {
		cout << tmp[n] << endl;
	} else {
		cout << tmp[i-1] + tmp[i+1] << endl;
	}
	
	return 0;
}
