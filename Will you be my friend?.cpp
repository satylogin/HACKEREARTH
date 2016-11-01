#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	int a, n, x, cnt = 0;
	cin >> a >> n;
	while (n--) {
		cin >> x;
		if (gcd(a, x) != 1) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}
