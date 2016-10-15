#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

int main()
{
	int t, n, a, c, b;
	cin >> t;
	while (t--) {
		cin >> n;
		n--;
		cin >> a;
		while (n--) {
			scanf("%d", &b);
			a = abs(a-b);
		}
		if (a&1) cout << "No" << endl;
		else cout << "Yes" << endl;
	}

	return 0;
}
