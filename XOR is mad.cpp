#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int main()
{
	int t, x, y, i, j, k;
	
	cin >> t;
	while (t--) {
		cin >> x;
		j = 0;
		for (i = 0; i < 30; ++i) {
			if (x&(1<<i)) j = i;
		}
		k = 0;
		for (i = j-1; i >= 0; --i) {
			if (!(x&(1<<i))) k++;
		}
		if (k == 0) {
		    cout << 0 << endl; continue;
		}
		k = (int) pow(2, k);
		k--;
		cout << k << endl;
	}

	return 0;
}
