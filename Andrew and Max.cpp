#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%lf", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int main()
{
	int t;
	double x, y, z, a, b, c, d;
	cin >> t;
	while (t--) {
		scan(x); scan(y); scan(z);
		d = (x + y + z) / 2;
		a = d - x;
		b = d - y;
		c = d - z;
		printf("%.2lf\n", 2*(a*b + b*c + c*a));
	}
	
	
	return 0;
}
