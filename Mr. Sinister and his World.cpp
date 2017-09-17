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

multiset <pair<int, pii > > pq;
pair<int, pii > p;
set <int> se;
set <int> :: iterator it;
int A[100001];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	int t, n, q, i, j, k, x, y, z, a, b, c;
	cin >> t;
	for (int xt = 1; xt <= t; ++xt) {
		cout << "Case " << xt << ":" << endl;
		pq.clear();
		se.clear();

		cin >> n;
		for (i = 0; i < n; ++i) cin >> A[i];
		sort(A, A+n);

		for (i = 0; i < n; ++i) {
			y = A[i];
			se.insert(y);
			it = se.lower_bound(y);
			if (it != se.begin()) {
				x = *(--it);
				pq.insert(mkp(y-x, mkp(x, y)));
			}
		}

		cin >> q;
		while (q--) {
			cin >> c;
			if (c == 1) {
				cin >> x;
				se.insert(x);
				
				it = se.lower_bound(x);
				if (it == se.begin()) a = -1;
				else a = *(--it);

				it = se.upper_bound(x);
				if (it == se.end()) b = -1;
				else b = *(it);

				if (a != -1 && b != -1) pq.erase(pq.find(mkp(b-a, mkp(a, b))));
				if (a != -1) pq.insert(mkp(x-a, mkp(a, x)));		
				if (b != -1) pq.insert(mkp(b-x, mkp(x, b)));
			} else if (c == 2) {
				p = *(--pq.end());
				cout << p.fi << " " << p.sc.fi << " " << p.sc.sc << endl;
			} else if (c == 3) {
				cin >> x;

				it = se.lower_bound(x);
				if (it == se.begin()) a = -1;
				else a = *(--it);

				it = se.upper_bound(x);
				if (it == se.end()) b = -1;
				else b = *(it);

				if (a != -1) pq.erase(pq.find(mkp(x-a, mkp(a, x))));
				if (b != -1) pq.erase(mkp(b-x, mkp(x, b)));
				if (a != -1 && b != -1) pq.insert(mkp(b-a, mkp(a, b)));

				se.erase(x);
			}
		}
	}

	return 0;
}
