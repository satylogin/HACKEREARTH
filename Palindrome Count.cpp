#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[100];

bool check_palin(int i, int j)
{
	while (i < j) {
		if (str[i] != str[j]) return false;
		i++; j--;
	}
	return true;
}

int main()
{
	int i, j, k, ans = 0;
	
	cin >> str;
	k = strlen(str);
	
	for (int len = 1; len <= k; ++len) {
		for (i = 0; i <= k-len; ++i) {
			if (check_palin(i, i+len-1)) ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
