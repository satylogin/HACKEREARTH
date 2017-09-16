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

char s[2000001], t[100001];
int F[2000001], sa[2000001], idx[2000001], tmp[2000001];
int N, gap;
int T[2][5000000];
pair<string, int> A[100001];

void make(int n, int start, int end)
{
	if (start == end) {
		T[0][n] = T[1][n] = sa[start-1];
		return;
	}
	int mid = (start + end) >> 1;
	make(n<<1, start, mid);
	make(n<<1|1, mid+1, end);
	
	int a = T[0][n<<1], b = T[0][n<<1|1];
	if (tmp[a] <= tmp[b]) T[0][n] = a; else T[0][n] = b;

	a = T[1][n<<1], b = T[1][n<<1|1];
	if (tmp[a] >= tmp[b]) T[1][n] = a; else T[1][n] = b;
}

int query(int n, int start, int end, int l, int r, int t)
{
	if (start > end || start > r || end < l) return t == 0 ? N : N+1;
	if (start >= l && end <= r) return T[t][n];
	int mid = (start + end) >> 1;
	int a = query(n<<1, start, mid, l, r, t);
	int b = query(n<<1|1, mid+1, end, l, r, t);

	if (t == 0) {
		if (tmp[a] <= tmp[b]) return a; else return b;
	} else {
		if (tmp[a] >= tmp[b]) return a; else return b;
	}
}

bool comp(int i, int j)
{
	if (idx[i] != idx[j]) return idx[i] < idx[j]; i += gap; j += gap;
	return (i < N && j < N ? idx[i] < idx[j] : i > j);
}

void build()
{
	int i, j, k;
	for (i = 0; i < N; ++i) sa[i] = i, idx[i] = s[i];

	for (gap = 1; ; gap *= 2) {
		sort(sa, sa+N, comp);
		for (i = 0; i < N-1; ++i) tmp[i+1] = tmp[i] + comp(sa[i], sa[i+1]);
		for (i = 0; i < N; ++i) idx[sa[i]] = tmp[i];
		if (tmp[N-1] == N-1) break;
	}
}

int main()
{
	int n, m, i, j, k, x, y, z;
	int start, mid, end, a, b;

	scanf("%d %d", &n, &m);

	for (i = 0; i < 4*n; ++i) {
		T[0][i] = MOD;
	}

	j = 0;
	z = 0;
	for (i = 0; i < n; ++i) {
		scanf("%s", t);
		A[i].fi = string(t) + '$';
		A[i].sc = z;
		z += A[i].fi.size();
		for (k = 0; t[k]; ++k) {
			s[j++] = t[k];
		}
		s[j++] = '$';
		F[i] = k + 1;
		if (i) F[i] += F[i-1];
		else F[i]--;
	}
	N = j;

	build();

	s[N] = '\0';
	//for (i = 0; i < N; ++i) cout << sa[i] << " "; cout << endl;

	sort(A, A+n);
	for (i = 0; i < n; ++i) {
		y = A[i].sc;
		z = y + A[i].fi.size();
		for (j = y; j < z; ++j) {
			tmp[j] = i;
		}
	}
	//for (i = 0; i < N; ++i) cout << tmp[i] << " "; cout << endl;
	tmp[N] = MOD;
	tmp[N+1] = -1;

	make(1, 1, N);
	while (m--) {
		scanf("%s", t);
		y = strlen(t);
		a = b = -1;

		start = 0;
		end = N-1;
		while (start <= end) {
			mid = (start + end) >> 1;
			x = strncmp(t, s+sa[mid], y);

			if (x == 0) {
				a = mid;
				end = mid - 1;
			} else if (x < 0) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}

		start = 0;
		end = N-1;
		while (start <= end) {
			mid = (start + end) >> 1;
			x = strncmp(t, s+sa[mid], y);

			if (x == 0) {
				b = mid;
				start = mid + 1;
			} else if (x < 0) {
			    end = mid - 1;
			} else {
			    start = mid + 1;
			}
		}

        	if (a != -1 && b != -1) {
			x = query(1, 1, N, a+1, b+1, 0);
			y = query(1, 1, N, a+1, b+1, 1);
			//cout << "a = " << a << " b = " << b << " x = " << x << " y = " << y << endl;
			a = lower_bound(F, F+n, x) - F;
			b = lower_bound(F, F+n, y) - F;
        	}

		printf("%d %d\n", a, b);
	}

	return 0;
}
