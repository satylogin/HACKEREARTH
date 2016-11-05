#include <stdio.h>

int main()
{
	int t, n, k, p, i, k, index, start, end, mid, flag;
	scanf("%d", &t);
	
	for ( ; t; t--) {
		scanf("%d%d%d", &n, &k, &p);
		int gone[k];
		for (i = 0; i < k; i++) {
			scanf("%d", &gone[i]);
		}
		index = -1;
		flag = 0; start = 0; end = k - 1;
		while (flag != 1) {
			mid = start + (end - start) / 2;
			if (gone[mid] < p) {
				start = mid + 1;
			}
		}
		
	}
	
    return 0;
}
