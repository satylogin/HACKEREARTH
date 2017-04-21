#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

char str[1000000];

set <char> se;

int main()
{
	int t, i, j, c;
	cin >> t;
	se.insert('a');
	se.insert('A');
	se.insert('e');
	se.insert('E');
	se.insert('i');
	se.insert('I');
	se.insert('o');
	se.insert('O');
	se.insert('u');
	se.insert('U');
	while (t--)
	{
	    scanf("%s", str);
	    c = 0;
	    for (i = 0; str[i]; ++i) {
	        if (se.find(str[i]) != se.end()) c++;
	    }
	    cout << c << endl;
	}
	return 0;
}
