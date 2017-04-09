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

int n, dp[1001][1001], arr[1001];

int get(int idx, int lst)
{
	if (idx == n+1) return 0;
	if (dp[idx][lst] != -1) return dp[idx][lst];
	int x = get(idx+1, lst);
	if (arr[idx]%arr[lst] == 0) x = max(x, 1 + get(idx+1, idx));
	return dp[idx][lst] = x;
}

int main()
{
	int i, j;
	memset(dp, -1, sizeof(dp));
	cin >> n;
	arr[0] = 1;
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr+n+1);
	j = 0;
	for (i = 1; i <= n; ++i) {
		j = max(j, get(i, 0));
	}
	if (j <= 1) cout << -1 << endl;
	else cout << j << endl;

	return 0;
}
