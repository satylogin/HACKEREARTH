#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int mark[10000], arr[10000];

int main()
{
	int n, i, j, cur, dest;
	scan(n);
	
	for (i = 1; i <= n; ++i) {
		scan(arr[i]);
	}
	
	scan(cur);
	scan(dest);
	
	while (cur != dest) {
		if (mark[cur] == 1) {
			break;
		}
		mark[cur] = 1;
		cur = arr[cur];
	}
	
	if (cur == dest) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	
	return 0;
}
