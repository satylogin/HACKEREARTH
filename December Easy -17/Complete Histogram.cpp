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

const ll INF = 1e18;

ll A[2][100001], C[2][100001], DP[2][100001];
ll T[2][1000001], H[100001];

void make(int id, int n, int start, int end)
{
	if (start == end) {
		T[id][n] = INF;
		return;
	}
	int mid = (start + end) >> 1;
	make(id, n<<1, start, mid);
	make(id, n<<1|1, mid+1, end);
	T[id][n] = min(T[id][n<<1], T[id][n<<1|1]);
}

void insert(int id, int n, int start, int end, int x, ll val)
{
	if (start > end || start > x || end < x) return;
	if (start == x && end == x) {
		T[id][n] = val;
		return;
	}
	int mid = (start + end) >> 1;
	insert(id, n<<1, start, mid, x, val);
	insert(id, n<<1|1, mid+1, end, x, val);
	T[id][n] = min(T[id][n<<1], T[id][n<<1|1]);
}

ll query(int id, int n, int start, int end, int l, int r)
{
	if (start > end || start > r || end < l) return INF;
	if (start >= l && end <= r) return T[id][n];
	int mid = (start + end) >> 1;
	return min(query(id, n<<1, start, mid, l, r), query(id, n<<1|1, mid+1, end, l, r));
}

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	ll n, m, a, b, x, y, i, j, k;
	cin >> n >> m >> a >> b >> x >> y;
	for (i = 1; i <= n; ++i) {
		cin >> H[i];
		C[0][i] = y * H[i];
		C[1][i] = (m - H[i]) * x;
	}
	make(0, 1, 0, n);
	make(1, 1, 0, n);
	for (i = 1; i <= n; ++i) {
		A[0][i] = C[0][i] + A[0][i-1];
		A[1][i] = C[1][i] + A[1][i-1];
	}
	insert(0, 1, 0, n, 0, 0);
	insert(1, 1, 0, n, 0, 0);
	for (i = 1; i <= n; ++i) {
		ll cost0 = query(0, 1, 0, n, i-b, i-a);
		ll cost1 = query(1, 1, 0, n, i-b, i-a);

		DP[0][i] = A[0][i] + cost1;
		DP[1][i] = A[1][i] + cost0;

		insert(0, 1, 0, n, i, DP[0][i] - A[1][i]);
		insert(1, 1, 0, n, i, DP[1][i] - A[0][i]);
	}
	ll ans = min(DP[0][n], DP[1][n]);
	if (ans > 1e17) ans = -1;
	cout << ans << endl;

	return 0;
}
