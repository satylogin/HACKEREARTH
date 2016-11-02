#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int arr[1001][40], tmp[40];

void fnt(int x, int n) {
	for (int i = 0; i < 32; ++i) {
		arr[x][i] = n % 2;
		n /= 2;
	}
}

int main()
{
	int t, n, m, i, j, k, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> n;
		for (i = 0; i < n; ++i) {
			scan(k);
			fnt(i, k);
		}
		j = 0;
		c = 1;
		while (a) {
			k = a % 2;
			if (k == 0) {
				c = 1;
			} else {
				c = 0;
				for (i = 0; i < n; ++i) {
					if (arr[i][j] == 0) {
						c = 1;
						break;
					}
				}
			}
			//cout << a << " " << i << "  " << j << endl;
			if (c == 0) {
				break;
			} else {
				a /= 2;
				j++;
			}
		}
		
		if (a) {
			printf("No\n");
		} else {
			printf("Yes\n");
		}
	}
	
	return 0;
}
