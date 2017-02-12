#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)
 
ll d, x, y;
 
void extended_euclid(ll a, ll b)
{
	if (b == 0) {
		d = a;
		x = 1ll;
		y = 0ll;
	} else {
		extended_euclid(b, a%b);
		ll tmp = x;
		x = y;
		y = tmp - (a/b)*y;
	}
}
 
int main()
{
	ll a, b, k, dist, x0, y0, ans, z;
	int k1;
 
	cin >> a >> b >> dist;
	if (a < b) {
	    swap(a, b);
	}
	extended_euclid(a, b);
	
	if (dist%d) {
		cout << -1 << endl;
	} else {
	    k = dist / d;
	    x0 = k*x;
	    y0 = k*y;
	    
	    ans = MOD;
	    ans *= MOD;
	    a = a / d;
	    b = b / d;
	    x = x0;
	    y = y0;
	    if (x < 0 || y > 0) {
    	    for (k1 = 0; k1 < 500000000; ++k1) {
    	        ans = min(ans, max(x, -x) + max(y, -y));
    	        x += b;
    	        y -= a;
    	    }
	    }
	    x = x0;
	    y = y0;
	    if (x > 0 || y < 0) {
    	    for (k1 = 0; k1 < 500000000; ++k1) {
    	        ans = min(ans, max(x, -x) + max(y, -y));
    	        x -= b;
    	        y += a;
    	    }
	    }
	    
	    
		cout << ans << endl;
	}
 
	return 0;
}
