#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int main()
{
	int n, i, j, k, z, o, cnt;
	scan(n);

	cnt = 0;	
	for (i = 0; i < n; ++i) {
		scan(k);
		cnt |= k;
	}
	
	cout << cnt << endl;
	
	return 0;
}
