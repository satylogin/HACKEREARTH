#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x)
 
int arr[1000002], freq[1000002];
 
int main()
{
	int t, n, m, i, j, k, md;
	ll ans, tmp;
 
	scan(t);
	while (t--) {
		scanf("%d %d %d %d", arr+0, arr+1, &n, &md);
		memset(freq, 0, sizeof(freq));
		
		freq[arr[0]]++;
		freq[arr[1]]++;
		k = max(arr[0], arr[1]);
		for (i = 2; i < n; ++i) {
			arr[i] = (arr[i-1] + arr[i-2]) % md;
			freq[arr[i]]++;
			k = max(k, arr[i]);
		}
		
		ans = 0;
		for (i = 0; i <= k; ++i) {
		    tmp = freq[i];
		    ans += (tmp*tmp);
		}
 
		printf("%lld\n", ans);
	}
 
	return 0;
}
