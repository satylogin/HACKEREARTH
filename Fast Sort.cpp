#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

int main()
{
	int t, i, j, mark[30];
	string s1, s2;

	cin >> t;
	while (t--) {
		cin >> s1 >> s2;
		memset(mark, 0, sizeof(mark));
		for (i = 0; s2[i]; ++i) {
			mark[s2[i]-'a']++;
		}
		for (i = 0; i < 26; ++i) {
			j = s1[i]-'a';
			while (mark[j]--) {
				cout << (char)(j+'a');
			}
		}
		cout << endl;
	}

	return 0;
}
