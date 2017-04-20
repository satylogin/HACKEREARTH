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

int arr[100001];

int main()
{
	int t, n, i, j, k, a, b, c;
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> k;
		while (k >= n) k -= n;
		for (i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		for (i = n-k; i < n; ++i) {
			cout << arr[i] << " ";
		}
		for (i = 0; i < n-k; ++i) {
			cout << arr[i] << " ";
		} cout << endl;
	}

	return 0;
}
