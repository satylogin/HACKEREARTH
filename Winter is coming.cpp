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

ll arr[100001];
vector <int> v[100001];

int main()
{
	int t, n, i, j, k, a, b, c, x, y, z;
	sci(t);
	while (t--) {
		sci(n);
		for (i = 0; i < n; ++i) {
			v[i].clear();
		}
		v[0].pb(0);
		for (i = 1; i <= n; ++i) {
			scl(arr[i]);
			arr[i] += arr[i-1];
			arr[i] %= n;
			v[arr[i]].pb(i);
		}
		x = MOD;
		y = MOD;
		for (i = 0; i < n; ++i) {
			for (j = 0; j < ((int)v[i].size())-1; ++j) {
				if (v[i][j+1] - v[i][j] < x) {
					x = v[i][j+1] - v[i][j];
					y = v[i][j]+1;
				} else if (v[i][j+1] - v[i][j] == x) {
					if (v[i][j] < y) y = v[i][j]+1;
				}
			}
		}
		cout << y << " " << y+x-1 << endl;
	}

	return 0;
}
