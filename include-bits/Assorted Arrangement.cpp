#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

int color[60], m;

int bad(int x, int i)
{
	if (x%color[i] != 0) return 1;
	for (int j = i+1; j <= m; ++j) {
		if (x%color[j] == 0) return 1;
	}
	return 0;
}

int main()
{
	int n, i, j, ans = 0;
	cin >> n >> m;
	for (i = 1; i <= m; ++i) {
		scanf("%d", &color[i]);
	}
	for (i = 0; i < n; ++i) {
		cin >> j;
		++ans;
		while (bad(ans, j)) ++ans;
	}
	cout << ans << endl;

	return 0;
}
