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

char str[1001];
int dp[1001][1001];

int make_table(int i, int j)
{
	if (i == j) return dp[i][j] = 1;
	if (i+1 == j) return dp[i][j] = (str[i] == str[j]);
	if (dp[i][j] != -1) return dp[i][j];
	make_table(i+1, j);
	make_table(i, j-1);
	if (str[i] == str[j]) {
		return dp[i][j] = make_table(i+1, j-1);
	} else {
		return dp[i][j] = 0;
	}
}

int main()
{
	int t, i, j, k, n;
	ll ans;
	sci(t);
	while (t--) {
		scanf("%s", str);
		n = strlen(str);
		memset(dp, -1, sizeof(dp));
		make_table(0, n-1);
		ans = 0;
		for (i = 0; i < n; ++i) {
			for (j = i; j < n; ++j) {
				if (dp[i][j]) {
					ans += (j-i+1)*(j-i+1);
				}
			}	
		}
		cout << ans << endl;
	}

	return 0;
}
