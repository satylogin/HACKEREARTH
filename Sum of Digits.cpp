#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair

char num[100], num1[100], num2[100], ans[100];
ll dp[100][400], mem[100][400];

ll find(ll dig, ll s)
{
	if (dig == 0) {
		return (s == 0);
	}

	if (mem[dig][s]) return dp[dig][s];
	mem[dig][s] = 1;
	ll ret = 0;

	for (int i = 0; i < 10; ++i) {
		ret += find(dig-1, s-i);
	}

	return (dp[dig][s] = ret);
}

ll get_ans(ll x, ll s)
{
	sprintf(num, "%lld", x);
	ll i, j, k, len, a, b, c;
	
	len = strlen(num);
	j = len;
	c = 0;

	for (i = 0; i < len; ++i) {
		--j;
		a = num[i] - '0';
		for (k = 0; k < a; ++k) {
			if (s-k >= 0) c += find(j, s-k);
		}
		s -= a;
	}

	return c;
}

ll sum(string str)
{
	ll s = 0;
	for (int i = 0; str[i]; ++i) s += str[i] - '0';
	return s;
}

void print(ll a, ll s)
{
	ll x, y, z, i, j;
	sprintf(num1, "%lld", a);
	string st = string(num1);
	x = sum(st);
	while (x != s) {
		//cout << st << endl;
		if (x > s) {
			for (i = st.length()-2; i >= 0; --i) {
				if (st[i] != '9') {
					st[i]++;
					for (j = i+1; j < st.length(); ++j) st[j] = '0';
					break;
				}
			}
			if (i < 0) {
				z = st.length();
				st = "1";
				for (i = 0; i < z; ++i) st += "0";
			}
		} else {
			for (i = st.length()-1; i >= 0; --i) {
				if (st[i] != '9') {
					st[i]++; break;
				}
			}
			if (i < 0) {
				z = st.length();
				st = "1";
				for (i = 0; i < z; ++i) st += "0";
			}
		}
		x = sum(st);
	}
	cout << st << endl;
}

int main()
{
	ll a, b, s;
	cin >> a >> b >> s;
	cout << get_ans(b+1, s) - get_ans(a, s) << endl;
	print(a, s);

	return 0;
}
