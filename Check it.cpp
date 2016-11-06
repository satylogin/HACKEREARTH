#include <iostream>

using namespace std;

#define SIZE 100005

int par[SIZE], a[SIZE], b[SIZE], n, m;
int find_par(int);
void uni(int, int);

int main()
{
	int i, j, k, x, y, t, count;
	cin >> t;

	for (; t; --t) {
		cin >> n >> m;
		for (i = 1; i <= m; ++i) {
			cin >> a[i] >> b[i];
		}
		for (i = 1; i <= n; ++i) {
			par[i] = i;
		}
		for (i = 1; i < n; ++i) {
			cin >> k;
			x = a[k];
			y = b[k];
			uni(x, y);
		}
		count = 0;
		for (i = 1; i <= n; ++i) {
			if (find_par(i) == i) count++;
		}
		if (count == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}

int find_par(int x)
{
	if (par[x] == x) return x;
	return (par[x] = find_par(par[x]));
}

void uni(int x, int y)
{
	int px, py;
	px = find_par(x);
	py = find_par(y);
	if (px != py) {
		par[px] = py;
	}
}
