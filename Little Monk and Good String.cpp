#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)

int main()
{
	string str;
	char ch;
	int i, c, a;
	cin >> str;
	a = c = 0;
	for (i = 0; str[i]; ++i) {
		ch = str[i];
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			a++;
		} else {
			a = 0;
		}
		c = max(c,a);
	}
	cout << c << endl;

	return 0;
}
