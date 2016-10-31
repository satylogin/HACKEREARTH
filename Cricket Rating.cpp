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
	int n, i, j, k, cur, ans;
	
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	cur = ans = 0;
	for (i = 0; i < n; ++i) {
		cur = max(0, cur + arr[i]);
		ans = max(ans, cur);
	}
	cout << ans << endl;
	
	return 0;
}
