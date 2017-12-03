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
#define fi first
#define sc second
#define deb 0

map<int, int> last;
int A[100005], M[100005], ANS[100005], P[100005];
vector<int> ans;

int main()
{
	int n, m, i, j, k, x, y, z;
	sci(n);
	sci(m);
	for (i = 1; i <= n; ++i) sci(A[i]);
	sort(A+1, A+1+n);
	int cur = 0, mx = 0;
	last[0] = 1;
	ANS[1] = 1;
	for (i = 2; i <= n; ++i) {
		x = (A[i] - A[i-1]) % m;
		cur = (cur + x) % m;
		ANS[i] = 1;
		if (last.find(cur) != last.end()) {
			x = last[cur];
			ANS[i] = ANS[x] + 1;
			P[i] = x;
		}
		last[cur] = i;
		mx = max(mx, ANS[i]);
	}
	for (i = 1; i <= n; ++i) {
		if (mx == ANS[i]) {
			x = i;
			vector<int> tmp;
			while (x != 0) {
				tmp.pb(A[x]);
				x = P[x];
			}
			reverse(tmp.begin(), tmp.end());
			if (ans.empty()) {
			    ans = tmp;
 			} else {
				int f = 0;
				for (j = 0; j < ans.size(); ++j) {
					if (ans[j] < tmp[j]) break;
					if (ans[j] > tmp[j]) {
						f = 1;
						break;
					}
				}
				if (f) {
				    ans = tmp;
				}
			}
		}
	}
	printf("%d\n", (int)ans.size());
	for (i = 0; i < ans.size(); ++i) {
		printf("%d ", ans[i]);
	}
	puts("");

	return 0;
}
