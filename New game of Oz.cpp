#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int arr[1001];

int main()
{
	int t, n, m, cnt = 0, a, b, i;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		sort(arr, arr+n);
		cnt = 0;
		arr[n] = 0;
		for (i = 0; i < n; ++i) {
			cnt++;
			if (arr[i+1] == arr[i]+1) {
				i++;	
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
