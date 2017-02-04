#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define scan(x) scanf("%d", &x)

char str[10];

int convert(char str[])
{
	int x, y, ret; 
	x = (str[0]-'0')*10 + (str[1]-'0');
	y = (str[3]-'0')*10 + (str[4]-'0');
	return x*60+y;
}

int main()
{
	int t, i, j, n, x, tc, lim, begin, travel, choose, wake;
	int start, end, ans, req, beg, takes, last;

	tc = 1;
	cin >> t;
	while (t--) {
		cout << "Case " << tc++ << ": ";
		cin >> n;
		cin >> str; lim = convert(str);
		cin >> str; wake = convert(str);
		cin >> str; beg = convert(str);
		cin >> travel >> choose;

		begin = max(wake, beg-travel);
		req = travel*2 + choose;
		ans = -1;
		last = MOD;
		for (i = 0; i < n; ++i) {
			cin >> str; start = convert(str);
			cin >> str; end = convert(str);
			//cout << start << " " << end << endl;

			if (begin+req < start && begin+req < lim) {
				if (ans == -1 || begin+req < last) {
					ans = i+1;
					last = begin+req;
				}
				//cout << begin+req << " * " << start << endl;
			} else if (max(end, begin)+req < lim) {
				takes = max(end, begin) + req;
				if (takes < last) {
					last = takes;
					ans = i+1;
				}
			}
		}

		cout << ans << endl;
	}


	return 0;
}
