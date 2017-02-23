#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

int m1[30], m2[30];
char str[1000001];

int main()
{
	   int n, i, j;
	   cin >> n >> str;
	   for (i = 0; str[i]; ++i) {
	       m1[str[i]-'a']++;
	   }
	   cin >> str;
	   for (i = 0; str[i]; ++i) {
	       m2[str[i]-'a']++;
	   }
	   
	   for (i = 0; i < 26; ++i) {
	       if (m1[i] != m2[i]) {
	           cout << "NO" << endl; return 0;
	       }
	   }
	   
	   cout << "YES" << endl;
	
	return 0;
}
