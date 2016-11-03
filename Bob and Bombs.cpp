#include <bits/stdc++.h>
using namespace std;

char str[1000000];
int arr[1000000];

int main()
{
	int t, i, j, k, n, m, ans;
	cin >> t;
	while (t--) {
		scanf("%s", str);
		n = strlen(str);
		
		for (i = 0; str[i]; ++i) {
			if (str[i] == 'B') {
				if (i == 0) {
					if (str[i+1] == 'W') arr[i+1] = 1;
					if (str[i+2] == 'W') arr[i+2] = 1;
				} else if (i == 1) {
					if (str[i-1] == 'W') arr[i-1] = 1;
					if (str[i+1] == 'W') arr[i+1] = 1;
					if (str[i+2] == 'W') arr[i+2] = 1;
				} else {
					if (str[i-2] == 'W') arr[i-2] = 1;
					if (str[i-1] == 'W') arr[i-1] = 1;
					if (str[i+1] == 'W') arr[i+1] = 1;
					if (str[i+2] == 'W') arr[i+2] = 1;
				}
			}
		}
		
		ans = 0;
		for (i = 0; i < n+2; ++i) {
			if (i < n && arr[i] == 1) {
				ans++;
			}
			arr[i] = 0;
		}
		
		cout << ans << endl;
	}
}
