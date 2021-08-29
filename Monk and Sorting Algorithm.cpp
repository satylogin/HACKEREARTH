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

ll arr[1000001], tmp[1000001], A[1000001], tmp1[1000001];
ll I;

void merge(int start, int mid, int end)
{
	int p = start; 
	int q = mid;
	int r = p;
	while (p < mid && q <= end) {
		if (arr[p] <= arr[q]) {
		    tmp1[r] = A[p];
			tmp[r++] = arr[p++];
		} else {
		    tmp1[r] = A[q];
			tmp[r++] = arr[q++];
		}
	}
	while (p < mid) {
	    tmp1[r] = A[p];
		tmp[r++] = arr[p++];
	}
	while (q <= end) {
	    tmp1[r] = A[q];
		tmp[r++] = arr[q++];
	}
	for (p = start; p <= end; ++p) {
		arr[p] = tmp[p];
		A[p] = tmp1[p];
	}
}

void merge_sort(int l, int r)
{
	if (l < r) {
		int mid = (l+r) >> 1;
		merge_sort(l, mid);
		merge_sort(mid+1, r);
		merge(l, mid+1, r);
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	ll n, i, x, y;
	cin >> n;
	x = 0;
	for (i = 0; i < n; ++i) {
		scl(A[i]);
		if (A[i] > x) x = A[i]; 
	}

	y = 1;
	I = 1;
	while (x/I) {
	    for (i = 0; i < n; ++i) {
	        arr[i] = (A[i] / I) % 100000;
	    }
		merge_sort(0, n-1);
		for (i = 0; i < n; ++i) {
			printf("%lld ", A[i]);
		}
		puts("");
		I *= 100000;
	}

	return 0;
}
