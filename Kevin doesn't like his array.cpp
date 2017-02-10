#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int mark[100001], arr[100001], freq[100001];

int main()
{
	int n, m, i, j, k, a, b, c, x, y, z;

	cin >> n;
	m = (n+1) / 2;
	b = c = 0;
	for (i = 0; i < n; ++i) {
		cin >> arr[i];
		mark[arr[i]]++;
		if (mark[arr[i]] > m) {
			cout << -1 << endl;
			return 0;
		}	
		if (i && arr[i] == arr[i-1]) {
		    freq[arr[i]]++;
		    b = max(b, freq[arr[i]]);
		    ++c;
		}
	}

	cout << max((c+1)/2, b) << endl;

	return 0;
}
