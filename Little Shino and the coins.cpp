#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#include <string>
#include <cstring>
#include <set>
#include <cstdlib>
#include <cmath>

using namespace std;

#define ll long long int
#define MOD 1000000007

char str[10000];
int ans;

int main()
{
	//freopen("input", "rb", stdin);
	//freopen("output", "w", stdout);

	int i, j, k, a, b, c, x, y, hash[26];
	cin >> k;
	cin >> str;

	for (i = 0; str[i] != '\0'; ++i) {
		for (j = 0; j < 26; ++j) {
			hash[j] = 0;
		}
		a = 0;
		for (j = i; str[j] != '\0'; ++j) {
			if (hash[str[j] - 'a'] == 0) {
				hash[str[j] - 'a'] = 1;
				a++;
			}
			if (a == k) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
