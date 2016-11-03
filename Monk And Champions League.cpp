#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

priority_queue <int, vector<int>, less<int> > pq;

int main()
{
	int m, n, i, j, k, x;
	scan(m);
	scan(n);
	while (m--) {
		scan(k);
		pq.push(k);
	}
	
	
	ll ans = 0;
	while(n--) {
		ans += pq.top();
		x = pq.top();
		pq.pop();
		x--;
		pq.push(x);
	}
	cout << ans << endl;
	
	return 0;
}
