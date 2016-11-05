#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int v[1000001];
int arr[40];

void find(int x)
{
	int i, j, cnt = 0, a, b = x;
	
	for (i = 0; i < 32; ++i) {
		arr[i] = x & 1;
		x >>= 1;
	}
	
	for (i = 0; i < 32; ++i) {
		if (arr[i] == 1 && arr[i+1] == 0 && arr[i+2] == 1) {
			cnt++;
		}
	}
	
	v[b] = cnt;
}

int main()
{
	int i, j, k, t, cnt, n;
	
	for (i = 0; i < 100001; ++i) {
		find(i);
	}
	
	scan(t);
	while (t--) {
		cnt = 0;
		scan(n); scan(k);
		for (i = 1; i <= n; ++i) {
			if (v[i] >= k) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	
	
	return 0;
}
