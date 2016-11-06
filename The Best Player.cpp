#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

multiset <pair<int, string> >se;

int main()
{
	int n, t, i, j, k, a, b, c;
	string str;
	cin >> n >> t;
	for (i = 0; i < n; ++i) {
		cin >> str >> a;
		se.insert(mkp(-1*a, str));
	}
	i = 0;
	for (multiset<pair<int, string> > :: iterator it = se.begin(); it != se.end() && i < t; ++it, ++i) {
		cout << it->second << endl;
	} 

	return 0;
}
