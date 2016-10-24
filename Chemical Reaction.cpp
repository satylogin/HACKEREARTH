#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

char str[500001][12];
int BIT[500001], arr[500001];

void insert(int x, int val)
{
	for (; x <= 500000; x += (x&-x))
		BIT[x] += val;
}

int query(int x)
{
	int ret = 0;
	for (; x > 0; x -= (x&-x))
		ret += BIT[x];
	return ret;
}

int find(int x, int end)
{
	int start, mid, idx, val;
	start = 1;
	while (start <= end) {
		mid = (start + end) >> 1;
		val = query(mid);
		if (val >= x) {
			idx = mid;
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	insert(idx, -1);
	return idx;
}

int main()
{
	int t, n, m, i, j, k, a, b, c, x, y, z;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1; i <= n; ++i) {
			insert(i, 1);
		}
		for (i = 1; i <= n; ++i) {
			scanf("%s", str[i]);
		}
		for (i = 1; i <= n; ++i) {
			scanf("%d", &arr[i]);
		}
		b = n;
		z = 0;
		n--;
		while (n--) {
			scanf("%d", &x);
			a = find(x, b);
			z = max(z, arr[a]);
			printf("%s %d\n", str[a], z);
		}	
		a = find(1, b);
		z = max(z, arr[a]);
		printf("%s %d\n", str[a], z);
	}

	return 0;
}
