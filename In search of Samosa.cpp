#include <bits/stdc++.h>

using namespace std;

int arr[10000];

int main()
{
	int n, k, i, cnt;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);
	cnt = 0;
	for (i = 0; i < n; ++i) {
		if (k >= arr[i]) {
			k -= arr[i];
			++cnt;
		} else break;
	}
	printf("%d\n", cnt);
	
	return 0;
}
