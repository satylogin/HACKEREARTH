#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int ans[10][10];

void dfs(int x, int y)
{
	queue <pair<int, int> > q;
	pair <int, int> p;
	memset(ans, -1, sizeof(ans));	
	
	int a, b;
	q.push(mkp(x, y));
	ans[x][y] = 0;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		a = x+2;
		b = y-1;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}

		a = x+2;
		b = y+1;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}

		a = x-2;
		b = y-1;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}

		a = x-2;
		b = y+1;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}

		a = x+1;
		b = y+2;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}
		
		a = x+1;
		b = y-2;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}

		a = x-1;
		b = y+2;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}

		a = x-1;
		b = y-2;
		if (a > 0 && a < 9 && b > 0 && b < 9 && ans[a][b] == -1) {
			ans[a][b] = ans[x][y]+1;
			q.push(mkp(a, b));
		}
	}
}

int main()
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	dfs(x2, y2);
	cout << ans[x1][y1] << endl;	

	return 0;
}
