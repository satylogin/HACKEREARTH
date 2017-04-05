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

ll dp[100001];
char str[100001];

int main()
{
	int i, j, k, a, b, c, x, y, z;
	int la, lb, lc;
	scanf("%s", str);

	la = lb = lc = -1;
	x = 0;
	for (i = 0; str[i]; ++i) {
		if (str[i] == 'a') {
			dp[i] = 1;
			if (la == -1) {
				la = i;
			} else {
				dp[i] += dp[la] + dp[la];
				la = i;
			}
		} else if (str[i] == 'b') {
			if (la != -1) dp[i] += dp[la];
			if (lb == -1) {
				lb = i;
			} else {
				dp[i] += dp[lb] + dp[lb];
				lb = i;
			}
		} else if (str[i] == 'c') {
			if (lb != -1) dp[i] += dp[lb];
			if (lc == -1) {
				lc = i;
			} else {
				dp[i] += dp[lc] + dp[lc];
				lc = i;
			}
		}
		dp[i] %= MOD;
		if (str[i] == 'c') x = dp[i];
	}
	cout << x << endl;

	return 0;
}
