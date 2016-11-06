#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[2000010], ans[2000010];

int main()
{
	int n, i, j, cmin, cmax;
	cin >> n;
	cmin = cmax = 0;
	
	scanf("%s", str);
	j = 0;
	for (i = 0; str[i]; ++i) {
		if (str[i] == 'w') {
			ans[j++] = 'v';
			ans[j++] = 'v';
		} else {
			ans[j++] = str[i];
		}
	}
	ans[j] = '\0';
	cmax = j;
	for (i = 0; ans[i]; ++i) {
		cmin++;
		if (ans[i] == 'v' && ans[i+1] == 'v') {
			i++;
		}
	}
	
	cout << cmin << " " << cmax << endl;
	
	return 0;
}
