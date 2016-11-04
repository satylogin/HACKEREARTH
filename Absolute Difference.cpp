#include <iostream>
using namespace std;

#define scan(x) scanf("%d", &x)

int main()
{
    int t, n, d, i, j, k, flg;
    
    scan(t);
    while (t--) {
    	scan(n);
    	scan(d);
    	flg = 1;
    	scan(j);
    	for (i = 1; i < n; ++i) {
    		scan(k);
    		if (abs(k-j) > d) flg = 0;
    		j = k;
    	}
    	if (flg) {
    		printf("YES\n");
    	} else {
    		printf("NO\n");
    	}
    }
    
    return 0;
}
