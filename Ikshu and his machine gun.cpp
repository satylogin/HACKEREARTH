#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int arr[1000000];

int main()
{
	int n, i, j, k;
	cin >> n;
	for (i = 0; i < n; ++i) {
		scan(arr[i]);
	}
	sort(arr, arr+n);
	for (i = 0; i < n; ++i) {
		printf("%d ", arr[i] - i);
	}
	cout << endl;
	
	return 0;
}
