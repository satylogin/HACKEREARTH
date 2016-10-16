#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

char grid[21][31];
char str[30];

int main()
{
	int t, n, m, i, j, k, cnt, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0; i < n; ++i) {
			cin >> grid[i];
		}

		cnt = 0;
		for (i = n-1; i >= 0; --i) {
			for (j = m-1; j >= 0; --j) {
				if (grid[i][j] == '0') {
					++cnt;
					for (a = 0; a <= i; ++a) {
						for (b = 0; b <= j; ++b) {
							if (grid[a][b] == '1') grid[a][b] = '0';
							else grid[a][b] = '1';
						}
					}
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}
