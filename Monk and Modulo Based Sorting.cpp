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

int arr[100001];

int main()
{
	int i, j, k, n, m, x, y;
	cin >> n >> k;
	for (i = 0; i < n; ++i) {
	    cin >> arr[i];
	}
	
	for (i = 1; i < n; ++i) {
	    j = i;
	    while (j > 0 && arr[j]%k < arr[j-1]%k) {
	        swap(arr[j], arr[j-1]);
	        j--;
	    }
	}
	
	for (i = 0; i < n; ++i) cout << arr[i] << " "; cout << endl;
	
	return 0;
}
