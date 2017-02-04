#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

char str[100];

int main()
{
	int i;
	scanf("%s", &str[1]);
	for (i = 1; str[i]; ++i) {
		if (str[i] == '?') {
			if (str[i-1] != 'a' && str[i+1] != 'a') {
				str[i] = 'a';
			} else {
				str[i] = 'b';
			}
		}
	}
	printf("%s\n", &str[1]);

	return 0;
}
