#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[1000000];
stack <string> stk;

int main()
{
	int t, i, j, k, a, b, c;
	string s;
	cin >> t;
	gets(str);
	while (t--) {
		gets(str);
		for (i = 0; str[i]; ++i) {
			if (str[i] == ' ') {
				stk.push(s);
				s = "";
			} else {
				s += str[i];
			}
		}
		if (s != "") {
			stk.push(s);
			s = "";
		}
		while (!stk.empty()) {
			cout << stk.top() << " ";
			stk.pop();
		}
		cout << endl;
	}
	
	return 0;
}
