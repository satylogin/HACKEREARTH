#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int arr[1000001];

int main()
{
	int n, i, j, k;
	cin >> n;
	for (i = 0; i < n; ++i) {
	    cin >> arr[i];
	}
	sort(arr, arr+n);
	cin >> k;
	
	int a, x;
	while (k--) {
	    cin >> a >> x;
	    if (a == 0) {
	        cout << n - (lower_bound(arr, arr+n, x) - arr) << endl;
	    } else {
	        cout << n - (upper_bound(arr, arr+n, x) - arr) << endl;
	    }
	}
	
	return 0;
}
