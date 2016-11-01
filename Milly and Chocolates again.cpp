#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

#define ll long long int
#define MOD 1000000007

int arr[100001];

int find(int x, int start, int end)
{
	int mid, idx = -1;
	while (start <= end) {
		mid = (start + end) >> 1;
		if (arr[mid] >= x) {
			idx = mid;
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return idx;
}

int main()
{
	int n, m, q, i, j, k, a, b, c;
	cin >> n;
	for (i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	for (i = 2; i <= n; ++i) {
		arr[i] += arr[i-1];
	}
	cin >> q;
	while (q--) {
		cin >> a;
		cout << find(a, 1, n) << endl;
	}
	
	return 0;
}
