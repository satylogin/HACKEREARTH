#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int mark[26], got[26];
char text[1000010], patt[10000];

int main()
{
	int t, n, m, i, j, k, a, b, c, x, y, z;
	cin >> t;
	while (t--) {
		scanf("%s %s", patt, text);
		memset(mark, 0, sizeof(mark));
		memset(got, 0, sizeof(got));
		
		a = b = 0;
		for (i = 0; patt[i]; ++i) {
			mark[patt[i]-'a']++;
			a++;
		}
		
		k = 0;
		for (i = 0; text[i]; ++i) {
			got[text[i]-'a']++;
			b++;
			if (got[text[i]-'a'] > mark[text[i]-'a']) {
				while (got[text[i]-'a'] > mark[text[i]-'a']) {
					got[text[k++]-'a']--;
					b--;
				}
			}
			
			//cout << i << " " << b << endl;
			if (b == a) {
				printf("YES\n");
				break;
			}
		}
		
		if (text[i] == '\0') {
			printf("NO\n");
		}
	}
	
	return 0;
}
