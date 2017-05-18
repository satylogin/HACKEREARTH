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

int arr[1000001], val[1000001];

void sieve()
{
	for (int i = 2; i*i <= 1000000; ++i)
		if (arr[i] == 0) 
			for (int j = i*i; j <= 1000000; j += i)
				arr[j] = 1;
	for (int i = 2; i <= 1000000; ++i) {
		if (arr[i] == 0) val[i] = 1;
		val[i] += val[i-1];
	}
}

int main()
{
	sieve();
	int q, l, r;
	sci(q);
	while (q--) {
		sci(l); sci(r);
		if (l > r) swap(l, r);
		printf("%d\n", val[r]-val[l-1]);
	}

	return 0;
}
