#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[1000000];
int mark1[26], mark2[26];

int main()
{
	int x, i, j;
	cin >> x;
	while (x--) {
		for (i = 0; i < 26; ++i) {
			mark1[i] = mark2[i] = 0;
		}
		scanf("%s", str);
		for (i = 0; str[i]; ++i) {
			mark1[str[i]-'a'] = 1;
		}
		scanf("%s", str);
		for (i = 0; str[i]; ++i) {
			mark2[str[i]-'a'] = 1;
		}
		for (i = 0; i < 26; ++i) {
			if (mark1[i] == 1 && mark2[i] == 1) {
				break;
			}
		}
		if (i < 26) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
