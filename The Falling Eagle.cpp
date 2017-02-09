#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%lld", &x)

ll arr[100002], front[100002], back[100002];
stack <ll> st;
pair <ll, ll> p[100002];

int main()
{
	ll t, n, i, j, k, a, b, c, sum, x;

	scan(t);
	arr[0] = MOD;
	while (t--) {
		scan(n);

		for (i = 1; i <= n; ++i) {
			scan(arr[i]);
			p[i] = mkp(arr[i], i);
			front[i] = i+1;
			back[i] = i-1;
		}
        arr[n+1] = MOD;
        
        sort(p+1, p+n+1);
        
        sum = 0;
        for (i = 1; i <= n; ++i) {
            b = p[i].first;
            a = p[i].second;
            x = min(arr[front[a]], arr[back[a]]);
            //cout << b << " " << x << endl; 
            if (x != MOD) sum += x;
            //else sum += x;
            back[front[a]] = back[a];
            front[back[a]] = front[a];
        }
        
        cout << sum << endl;
	}

	return 0;
}
