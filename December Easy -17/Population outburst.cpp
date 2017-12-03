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

struct {
	int p, l, c;
} A[1000001];

queue <pair<pii, int> > q;
int cap[1000001];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
	
	int n, rc, i, j, k, x, y, z, lev, child, cur, cap;
	cin >> n >> x;
	q.push(mkp(mkp(0, x), 0));
	cap = 0;
	for (i = 1; i <= n; ++i) {
		while (!cap) {
			cur = q.front().fi.fi;
			cap = q.front().fi.sc;
			lev = q.front().sc + 1;
			child = 1;
			q.pop();
		}
		cin >> x >> y;
		A[i].p = cur;
		A[i].l = lev;
		A[i].c = child;
		child += 1;
		cap -= 1;
		q.push(mkp(mkp(x, y), lev));
	}
	for (i = 1; i <= n; ++i) cout << A[i].p << " " << A[i].l << " " << A[i].c << endl;

	return 0;
}
