#include <iostream>

using namespace std;

int main()
{
	int t, n, count1, count2, i, j;
	char str[2000010];
	char boys[2000010], girls[2000010];
	boys[0] = 'B';
	girls[0] = 'G';
	for (i = 1; i < 2000010; ++i) {
		if (boys[i-1] == 'B') {
			boys[i] = 'G';
		} else {
			boys[i] = 'B';
		}
		if (girls[i-1] == 'B') {
			girls[i] = 'G';
		} else {
			girls[i] = 'B';
		}
	}

	cin >> t;
	for (; t; --t) {
		cin >> n;
		cin >> str;
		n = 2 * n;
		count1 = count2 = 0;
		for (i = 0; i < n; ++i) {
			//cout << str[i] << " " << boys[i] << " " << girls[i] << endl;
			if (str[i] != boys[i]) {
				count1++;
			}
			if (str[i] != girls[i]) {
				count2++;
			}
		}

		if (count1 < count2) {
			cout << count1 / 2 << endl;
		} else {
			cout << count2 / 2 << endl;
		}
	}

	return 0;
}
