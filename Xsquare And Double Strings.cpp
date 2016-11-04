#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[200];
int mark[26];

int main()
{
	int t, i, j, k;
	
	scan(t);
	while (t--) {
		scanf("%s", str);
		for (i = 0; str[i]; ++i) {
			mark[str[i]-'a']++;
		}
		
		for (i = 0; i < 26; ++i) {
			if (mark[i] > 1) {
				printf("Yes\n");
				break;
			}
		}
		
		if (i == 26) {
			printf("No\n");
		}
		
		for (i = 0; i < 26; ++i) mark[i] = 0;
	}
	
	return 0;
}
