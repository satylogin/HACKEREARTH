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

int arr[21][21];

int main()
{
	int c, t, n, i, j, k, cnt = 0, x, y;
	cin >> t;
	while (t--) {
		cin >> n;
		c = 0;
		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				cin >> arr[i][j];
			}	
		}

		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				for (x = i; x < n; ++x) {
					for (y = j; y < n; ++y) {
						if (arr[x][y] < arr[i][j]) c++;
					}
				}
			}
		}

		cout << c << endl;
	}

	return 0;
}
