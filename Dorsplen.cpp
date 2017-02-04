#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int main()
{
    ll r, g, b, ans = 0, k;
    cin >> r >> g >> b;
    ans = min(r, min(g, b));
    r -= ans;
    g -= ans;
    b -= ans;
    if (r == 0) {
        k = min(g, b);
        ans += k; g -= k; b -= k;
        ans += (g+1)/2; ans += (b+1)/2;
    } else if (g == 0) {
        k = min(r, b);
        ans += k; r -= k; b -= k;
        ans += (r+1)/2; ans += (b+1)/2;
    } else {
        k = min(g, r);
        ans += k; g -= k; r -= k;
        ans += (g+1)/2; ans += (r+1)/2;
    }
    cout << ans << endl;
	
	return 0;
}
