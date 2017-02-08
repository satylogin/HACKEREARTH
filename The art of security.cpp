#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

ll mark[20], n, arr[20];

ll get_ans(ll cnt, ll l, ll r)
{
	//cout << cnt << endl;
	if (l > r) {
		return 0;
	}

	if (cnt == n) {
		return 1;
	}

	ll x = 0;
	for (int i = 0; i < n; ++i) {
		if (mark[i] == 0) {
			mark[i] = 1;
			if (l+arr[i] <= r) x += get_ans(cnt+1, l+arr[i], r);
			x += get_ans(cnt+1, l, r+arr[i]);
			mark[i] = 0;
		}
	}

	return x;
}

int main()
{
	ll i, j, k, sum = 0;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}

	k = get_ans(0, 0, 0);
	cout << k << " " << sum << endl;
	if (sum >= k) {
	    cout << "Got no way out!" << endl;
	} else {
	    cout << "We will win!" << endl;
	}

	return 0;
}
