#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

char str[100001];

int main()
{
	int t, cnt, a, b, c, i, j, k;
	cin >> t;
	while (t--) {
		scanf("%s", str);
		cnt = 0;
		a = 0;
		for (i = 0; str[i]; ++i) {
			if (str[i] == 'X') {
				a = -1;
			} else if (str[i] == 'O') {
				if (a != -1) a++;
			} else if (str[i] == '*') {
				if (a != -1) cnt += a;
				a = 0;
			}
		}
		if (a != -1) cnt += a;
		cout << cnt << endl;
	}

	return 0;
}
