#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)

int arr[1000001], cnt[1000001];
int v[1000001];
stack <int> st;

int main()
{
	int n, i, j, x, y, z;
	sci(n);
	for (i = 1; i <= n; ++i) sci(arr[i]);

	for (i = n; i > 0; --i) {
		while (!st.empty() && arr[i] > arr[st.top()]) {
			cnt[st.top()] = st.top() - i;
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		cnt[st.top()] = st.top();
		st.pop();
	}
	
	for (i = 1; i <= n; ++i) {
		while (!st.empty() && arr[st.top()] < arr[i]) {
			x = i - st.top() + 1;
			v[x] = max(v[x], cnt[st.top()]);
			st.pop();
		}
		st.push(i);
	}

	ll k = 0;
	for (i = 2; i <= n; ++i) {
		k += v[i];
	}

	cout << k << endl;

	return 0;
}
