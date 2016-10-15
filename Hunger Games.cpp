#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

int arr[10000];

int main()
{
	int n, a, i, b, c, x;
	cin >> n;
	for (i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);
	a = b = arr[0];
	x = 0;
	for (i = 1; i < n; ++i) {
		x = max(x, arr[i] - a);
		a = arr[i];
		++i;
		if (i < n) {
			x = max(x, arr[i] - b);	
			b = arr[i];
		}
	}
	cout << x << endl;

	return 0;
}
