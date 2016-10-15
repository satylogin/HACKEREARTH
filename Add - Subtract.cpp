#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int arr[1000];

int main()
{
	int t, n, m, i, j, k, K, a, b, c, cur, res, start, mid, end;
	cin >> t;
	while (t--) {
		cin >> n >> K;
		for (i = 0; i < n; ++i) {
			scan(arr[i]);
		}
		sort(arr, arr+n);
		res = INT_MAX;
		for (i = 0; i < n-K+1; ++i) {
			start = arr[i]; 
			end = arr[i+K-1];
			for (k = start; k <= end; ++k) {
				cur = 0;
				for (j = i; j < i+K; ++j) {
					if (arr[j] < k) cur += 3*(k-arr[j]);
					else cur += 5*(arr[j]-k);
				}
				//cout << "i = " << i << " k = " << k << " cur = " << cur << endl;
				res = min(res, cur);
			}
		}
		printf("%d\n", res);
	}

	return 0;
}
