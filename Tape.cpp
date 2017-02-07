#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

ll arr[1000000], mark[1000001], sum[1000000];

int main()
{
	ll x, y, n, k, d, D, i, j, a, b, c, fg, l, r;

	cin >> n >> k >> D;
	
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
		sum[i] = arr[i] + sum[i-1];
	}

    x = y = -1;
    c = 0;
    l = 1;
    r = k;
    while (r <= n) {
        if ((x >= l && x <= r) || (y >= l && y <= r) && (mark[y] - mark[l-1] != 0)) {
            b = MOD;
        } else {
            b = sum[r] - sum[l-1];
        }
        if (b < D) {
            c++;
            //cout << l << " " << r << " " << b << " " << D << endl;
            //cout << mark[y] - mark[l-1] << endl;
            for (i = r; i > 0 && i >= l; --i) {
                if (arr[i] != 0) break;
            }
            if (i == l-1) {
                cout << -1 << endl;
                return 0;
            }
            x = i;
            y = i+k-1;
            //cout << x << " " << y << endl;
            for (i = x; i <= y && i <= n; ++i) {
                if (arr[i] != 0) {
                    mark[i] = mark[i-1] + 1;
                } else {
                    mark[i] = mark[i-1];
                }
            }
        }
        l++;
        r++;
    }
	
	
	cout << c << endl;

	return 0;
}
