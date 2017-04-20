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

int mark[1000001];
set <pii > se;

int main()
{
	int t, n, i, j, x, y;
	cin >> t;
	while (t--) {
		memset(mark, 0, sizeof(mark));
		cin >> n;
		for (i = 0; i < n; ++i) {
			sci(x);
			mark[x]++;
		}
		x = y = -1;
		for (i = 1; i <= 1000000; ++i) {
		    if (mark[i] && x == -1) {
		        x = i;
		        y = i;
		    }
			if (mark[i] && (mark[i] > mark[x])) x = i;
			if (mark[i] && (mark[i] < mark[y])) y = i;
		}	
		//cout << x << " " << y << endl;
		if (abs(mark[x] - mark[y]) > 0) cout << abs(mark[x]-mark[y]) << endl;
		else cout << -1 << endl;
	}

	return 0;
}
