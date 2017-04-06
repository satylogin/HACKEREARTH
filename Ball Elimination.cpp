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

int dp[501][501], arr[501];

int get(int i, int j)
{
	if (j < i) return 0;

	if (dp[i][j] != -1) return dp[i][j];

	dp[i][j] = 1 + min(get(i+1, j), get(i, j-1));
	for (int x = i+1; x <= j; ++x) {
		if (arr[x] == arr[i]) {
			dp[i][j] = min(dp[i][j], get(i+1, x-1) + get(x+1, j));
		}
	}

	return dp[i][j];
}

int main()
{
	memset(dp, -1, sizeof(dp));
	int n, i;
	sci(n);
	for (i = 0; i < n; ++i) {
		sci(arr[i]);
	}
	printf("%d\n", get(0, n-1));

	return 0;
}
