#include <bits/stdc++.h>

using namespace std;

#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

stack <int> st;
int ans[1000001], arr[1000001];

int main()
{
	int t, n, m, i, j, k;
	scan(t);
	while (t--) {
	    scan(n);
	    for (i = 0; i < n; ++i) {
	        scan(arr[i]);
	    }
	    for (i = n-1; i >= 0; --i) {
            while (!st.empty() && arr[i] > arr[st.top()]) {
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
	    }
	    while (!st.empty()) {
	        ans[st.top()] = -1;
	        st.pop();
	    }
	    for (i = 0; i < n; ++i) {
	        printf("%d ", i-ans[i]);
	    }
	    puts("");
	}
	
	return 0;
}
