#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#include <string>
#include <cstring>
#include <set>

using namespace std;

#define ll long long int
#define MOD 1000000007

ll arr[100001];
ll even[400001], odd[400001];

void make_tree(ll, ll, ll);
void update(ll, ll, ll, ll, ll);
ll query(ll, ll, ll, ll, ll, ll);

int main()
{
	ll n, i, j, k, a, q, b, c;
	cin >> n;
	
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	make_tree(1, 1, n);

	cin >> q;
	while (q--) {
		cin >> a >> i >> j;
		if (a == 0) {
			update(1, 1, n, i, j);
		} else {
			cout << query(1, 1, n, i, j, a) << endl;
		}
	}

	return 0;
}

void make_tree(ll n, ll start, ll end)
{
	if (start > end) {
		return;
	}

	if (start == end) {
		if (arr[start] & 1) {
			odd[n] = 1;
			even[n] = 0;
		} else {
			even[n] = 1;
			odd[n] = 0;
		}
		return;
	}

	ll mid = (start + end) / 2;
	make_tree(2*n, start, mid);
	make_tree(2*n+1, mid+1, end);
	even[n] = even[2*n] + even[2*n+1];
	odd[n] = odd[2*n] + odd[2*n+1];
}	

void update(ll n, ll start, ll end, ll index, ll val)
{
	if ((start > end) | (start > index) | (end < index)) {
		return;
	}

	if (start == index && end == index) {
		if (val & 1) {
			odd[n] = 1;
			even[n] = 0;
		} else {
			even[n] = 1;
			odd[n] = 0;
		}
		arr[index] = val;
		return;
	}

	ll mid = (start + end) / 2;
	update(2*n, start, mid, index, val);
	update(2*n+1, mid+1, end, index, val);
	even[n] = even[2*n] + even[2*n+1];
	odd[n] = odd[2*n] + odd[2*n+1];
}

ll query(ll n, ll start, ll end, ll l, ll r, ll parity)
{
	if ((start > end) | (start > r) | (end < l)) {
		return 0;
	}

	if ((start >= l) && (end <= r)) {
		if (parity == 1) {
			return even[n];
		} else {
			return odd[n];
		}
	}

	ll mid, p1, p2;
	mid = (start + end) / 2;
	p1 = query(2*n, start, mid, l, r, parity);
	p2 = query(2*n+1, mid+1, end, l, r, parity);

	return (p1 + p2);
}
