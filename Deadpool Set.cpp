#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MOD 1000000007

vector <int> v[1000001];

ll ans[1000001];
int mark[1000001], arr[1000001];

int main()
{
    int i, j, k, a, b, c, x, y, z, n, m;
	ll tot = 0;
	
	a = 0;
	for (i = 2; i <= 1000000; ++i) {
		for (j = i+i; j <= 1000000; j += i) {
			v[j].push_back(i);
		}
	}
	
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		scanf("%d", &arr[i]);
		mark[arr[i]] = 1;
	}
	
	for (i = 2; i <= 1000000; ++i) {
		if (mark[i]) {
			ans[i] = 1;
			for (j = 0; j < v[i].size(); ++j) {
				x = v[i][j];
				y = i / v[i][j];
				if (mark[x] && mark[y]) {
					ans[i] += (ans[x] * ans[y]);
					if (ans[i] >= MOD) {
						ans[i] %= MOD;
					}
				}
			}
			//cout << i << " " << ans[i] << endl;
			tot += ans[i];
			if (tot >= MOD) {
				tot -= MOD;
			}
		}
	}
	
	cout << tot << endl;
	
    return 0;
}
