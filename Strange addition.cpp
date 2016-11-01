#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[100000], a[100000], b[100000];

int main()
{
	int t, c, i, j, k, x, y, z;
	cin >> t;
	while (t--) {
		scanf("%s %s", a, b);
		i = j = 0;
		k = 0;
		c = 0;
		while (a[i] || b[j]) {
			x = c;
			if (a[i]) {
				x += a[i++] - '0';
			}
			if (b[j]) {
				x += b[j++] - '0';
			}
			str[k++] = (x % 10) + '0';
			c = x / 10;
		}
		while (c) {
			str[k++] = c % 10 + '0';
			c /= 10;
		}
		i = 0;
		while (i < k && str[i] == '0') i++;
		for (; i < k; ++i) printf("%c", str[i]);
		printf("\n");
	}
	
	return 0;
}
