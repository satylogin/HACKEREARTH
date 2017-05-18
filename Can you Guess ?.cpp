#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second

int ans[100001];

void get()
{
	for (int i = 1; i <= 100000; ++i) {
		for (int j = i+i; j <= 100000; j += i) {
			ans[j] += i;
		}
	}
}

int main()
{
	get();
	int n, x, i, j, k;
	cin >> n;
	while (n--) {
		cin >> x;
		cout << ans[x] << endl;
	}	

	return 0;
}
