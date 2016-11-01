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
	ll n, i, j, k, x, arr[200], s = 0;
	cin >> n;
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	
	x = 1;
	s = 0;
	for (i = 1; i <= n; ++i) {
		k = arr[i] * x - s;
		s += k;
		x++;
		cout << k << " ";
	}
	cout << endl;
	
	return 0;
}
