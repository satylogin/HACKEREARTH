#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

vector <int> v[100001];
int tim;
int ta[100001], td[100001];

void dfs(int x)
{
	tim++;
	ta[x] = tim;
	for (int i = 0; i < v[x].size(); ++i) {
		if (!ta[v[x][i]]) {
			dfs(v[x][i]);
			tim++;
		}
	}
	tim++;
	td[x] = tim;
}

int main()
{
	int n, m, i, j, k, a, b, c, x, y;
	cin >> n;
	for (i = 1; i < n; ++i) {
		scanf("%d %d", &x, &y);
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1);
	cin >> m;
	while (m--) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 1) swap(c, b);
		if (ta[b] <= ta[c] && td[c] <= td[b]) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
