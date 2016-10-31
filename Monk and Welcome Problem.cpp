#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int a[100001], b[100001];

int main()
{
	int n, i;
	scan(n);
	for (i = 0; i < n; ++i) scan(a[i]);
	for (i = 0; i < n; ++i) scan(b[i]);
	for (i = 0; i < n; ++i) printf("%d ", a[i] + b[i]); cout << endl;
	
	return 0;
}
