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

stack <int> st[100001];
int arr[200001], val[200001], ver[200001];

int main()
{
	int n, i, j, k, x, y;
	sci(n);
	for (i = 1; i <= n; ++i) {
		sci(arr[i]);
	}

	for (i = 1; i <= n; ++i) {
		x = abs(arr[i]);
		if (arr[i] > 0) {
			st[x].push(i);
		} else {
			if (!st[x].empty()) {
				val[i] = st[x].top();
				val[st[x].top()] = i;
				st[x].pop();
			}
		}
	}

	for (i = 1; i <= n; ++i) {
		if (val[i] != 0 && val[i] < i) {
			x = val[i];
			y = i;
			if (x+1 == y) {
				ver[x] = ver[y] = 1;
			} else if (ver[x+1] == 1 && ver[i-1] == 1) {
				ver[x] = ver[i] = 1;
			}
		}
	}	
	int ans = 0;
	x = 0;
	for (i = 1; i <= n; ++i) {
		if (ver[i] == 1) x++;
		else {
			ans = max(x, ans); x = 0;
		}
	}
	ans = max(ans, x);
	cout << ans << endl;

	return 0;
}
