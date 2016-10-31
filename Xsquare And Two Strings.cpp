#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int mark1[26], mark2[26];
char str[1000000];

int main()
{
	int t, n, i, j, k;
	cin >> t;
	while (t--) {
		for (i = 0; i < 26; ++i) mark1[i] = 0;
		for (i = 0; i < 26; ++i) mark2[i] = 0;
		scanf("%s", str);
		for (i = 0; str[i]; ++i) mark1[str[i]-'a'] = 1;
		scanf("%s", str);
		for (i = 0; str[i]; ++i) mark2[str[i]-'a'] = 1;
		for (i = 0; i < 26; ++i) {
			if (mark1[i] == 1 && mark2[i] == 1) {
				printf("Yes\n");
				break;
			}
		}
		if (i == 26) {
			printf("No\n");
		}
	}
	
	return 0;
}
