#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

ll arr[100001];

int main()
{
	ll n, x, i, j, k, a, b, c, y, z, ans;
	ll start, mid, end;
	cin >> n >> x;
	for (i = 0; i < n; ++i) {
	    scan(arr[i]);
	}
	
	k = 0;
	start = 0; 
	end = n;
	ll s;
	while (start <= end) {
	    mid = start + (end - start) / 2;
	    s = 0;
	    for (i = 0; i < mid; ++i) {
	        s += arr[i];
	        if (s > x) {
	            break;
	        }
	    }
	    if (s <= x) {
	        for (i = mid; i < n; ++i) {
	            s -= arr[i-mid];
	            s += arr[i];
	            if (s > x) break;
	        }
	    }
	    
	    if (s > x) {
	        end = mid-1;
	    } else {
	        ans = mid;
	        start = mid + 1;
	    }
	}
	cout << ans << endl;
	
	return 0;
}
