#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>


int n, i, j;
multiset <string> se;
multiset <string> :: iterator it;

int main()
{
	cin >> n;
	string s;
	int k;
	for (i = 0; i < n; ++i) {
	    cin >> s;
	    k = 0;
	    for (it = se.begin(); it != se.end(); ++it) {
	        k += (*it < s);
	    }
        cout << k << endl;
	    se.insert(s);
	}
	
	return 0;
}
