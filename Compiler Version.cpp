#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[100];

int main()
{
	int i, len;
	while (gets(str)) {
		len = strlen(str);
		for (i = 0; i < len; ++i) {
			if (str[i] == '/' && str[i+1] == '/') break;
			if (str[i] == '-' && str[i+1] == '>') {
				str[i] = '.'; str[i+1] = '\0';
			}
		}
		for (i = 0; i < len; ++i) {
			if (str[i] != '\0') printf("%c", str[i]);
		}
		printf("\n");
	}
	
	return 0;
}
