#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int arr[100001];

int main()
{
	int n, i, j;
	scan(n);
	for (i = 0; i < n; ++i) scan(arr[i]);
	for (i = 0; i < n-1; ++i) {
		arr[i+1] -= arr[i];
		arr[i] = 0;
		if (arr[i+1] < 0) {
			cout << "NO" << endl;
			return 0;
		}
	}
	if (arr[i] != 0) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	
	return 0;
}
