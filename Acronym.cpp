#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

set <string> se;
queue <char> q;

int main()
{
	int k, i, j;
	string s;
	cin >> k;
	while (k--) {
		cin >> s;
		se.insert(s);
	}
	
	cin >> k;
	while (k--) {
		cin >> s;
		if (se.find(s) == se.end()) {
			q.push(s[0]-'a'+'A');
		}
	}
	
	while (!q.empty()) {
		cout << q.front();
		q.pop();
		if (!q.empty()) cout << ".";
	}
	cout << endl;
	
	return 0;
}
