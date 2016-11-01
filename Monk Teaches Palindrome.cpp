#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[1000001];

int main()
{
	int t, n, len, i, j;
	cin >> t;
	while (t--) {
		scanf("%s", str);
		i = 0;
		len = strlen(str);
		j = len-1;
		while (i < j) {
			if (str[i] != str[j]) {
				break;
			}
			i++;
			j--;
		}
		if (i >= j) {
			cout << "YES ";
			if (len&1) {
				cout << "ODD" << endl;
			} else {
				cout << "EVEN" << endl;
			}
		} else {
			cout << "NO" << endl;
		}
		
	}
	
	return 0;
}
