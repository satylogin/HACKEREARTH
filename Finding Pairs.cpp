#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int mark[2000001];

ll find(int x)
{
	ll ret = x;
	ret *= (x+1);
	ret /= 2;
	return ret;
}

int main()
{
	int t, n, i, j, k;
	ll ans;
	
	scan(t);
	while (t--) {
		scan(n);
		for (i = 0; i < n; ++i) {
			scan(k);
			mark[k+1000000]++;
		}
		
		ans = 0;
		for (i = 0; i <= 2000000; ++i) {
			ans += find(mark[i]);
			mark[i] = 0;
		}
		
		printf("%lld\n", ans);
	}
	
	return 0;
}
