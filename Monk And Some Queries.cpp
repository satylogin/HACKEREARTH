#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

multiset <int> se;

int main()
{
	int n, m, i, j, k, x;
	cin >> n;
	while (n--) {
		scan(k);
		switch(k) {
			case 1: 
				scan(x);
				se.insert(x);
				break;
			case 2:
				scan(x);
				if (se.find(x) == se.end()) {
					printf("-1\n");
				} else {
					se.erase(se.find(x));
				}
				break;
			case 3:
				if (se.size() == 0) {
					printf("-1\n");
				} else {
					printf("%d\n", *(--se.end()));
				}
				break;
			case 4:
				if (se.size() == 0) {
					printf("-1\n");
				} else {
					printf("%d\n", *(se.begin()));
				}
				break;
		}
	}
	
	return 0;
}
