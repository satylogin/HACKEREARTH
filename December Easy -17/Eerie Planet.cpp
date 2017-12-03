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

multiset<int> pq;
multiset<pii > leave;
pair<pii, int> emp[100005], query[100005];
int ans[100005];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	int h, t, c, q, i, j, x, y, z, a, b;
	cin >> h >> c >> q;
	for (i = 0; i < c; ++i) {
		cin >> x >> y >> z;
		emp[i] = mkp(mkp(y, z), x);
	}
	for (i = 0; i < q; ++i) {
		cin >> x >> y;
		query[i] = mkp(mkp(y, x), i);
	}
	sort(emp, emp+c);
	sort(query, query+q);
	int cur = 0;
	int start = 0;
	int end = 0;
	j = 0;
	for (i = 0; i < q; ++i) {
		int entry = query[i].fi.fi;
		int height = query[i].fi.sc;
		int idx = query[i].sc;
		while (j < c && emp[j].fi.fi <= entry) {
			pq.insert(emp[j].sc);
			leave.insert(mkp(emp[j].fi.sc, emp[j].sc));
			j += 1;
		}
		while (!leave.empty() && leave.begin()->fi < entry) {
			pq.erase(pq.find(leave.begin()->sc));
			leave.erase(leave.begin());
		}
		if (!pq.empty() && *(--pq.end()) >= height) {
			ans[idx] = 0;
		} else {
			ans[idx] = 1;
		}
	}
	for (i = 0; i < q; ++i) puts(ans[i] == 0 ? "NO" : "YES");

	return 0;
}
