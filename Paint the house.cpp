#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

pair <ll, pair<ll, ll> > arr[100001];

int main()
{
	ll i, j, k, n, d, ans, a, b, c;

	cin >> n >> d;
	for (i = 1; i <= n; ++i) {
		cin >> arr[i].first >> arr[i].second.second >> arr[i].second.first;
		arr[i].second.first *= -1;
	}

	sort(arr+1, arr+n+1);


	ans = 0;
	ll cur_speed = 0, got = 0, idx = MOD;
	
	for (i = 1; i <= n; ++i) {
		if (arr[i].first != arr[i-1].first) {
			a = arr[i].second.first * -1;
			if (a > cur_speed) {
				d = max(0ll, d - (cur_speed * (arr[i].first - got)));
				if (d == 0) break;
				ans += arr[i].second.second;
				cur_speed = a;
				got = arr[i].first;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
