#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i, a[11], b[11];
	scanf("%d", &n);
	for (i = 0; i < n; ++i) scanf("%d", &a[i]);
	for (i = 0; i < n; ++i) scanf("%d", &b[i]);
	for (i = 0; i < n; ++i)
		if (a[i] <= b[i]) {
			printf("No\n");
			return 0;
		}
	printf("Yes\n");
	
	return 0;
}
