#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

map <int, pair<int, int> >mp;

int main()
{
	int n, m, i, j, k, x, y, z;
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf("%d", &x);
			mp[x] = mkp(i, j);
		}
	}
	
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (mp.find(x) == mp.end()) {
			printf("-1 -1\n");
		} else {
			printf("%d %d\n", mp[x].first, mp[x].second);
		}
	}
	
	return 0;
}
