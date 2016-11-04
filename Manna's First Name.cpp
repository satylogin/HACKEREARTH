#include <iostream>
#include <cmath>

using namespace std;

#define MOD 1000000007

long long int key(char s[]);
bool strcmp(char s[], char m[], long long int, long long int);

int main()
{
	char str[1000];
	long long int t, k1, k, k2, a, b, i, j, suvo, suvojit;
	cin >> t;

	k1 = key("SUVO");

	for (; t; --t) {
		cin >> str;
		a = b = k = suvo = suvojit = 0;
		while (str[b] != '\0' && b < 4) {
			k = k * 5 + str[b++];
		}
		b = b - 1;
		while (str[b] != '\0') {
			if (k == k1) {
				if (strcmp(str, "SUVO", a, b)) {
					suvo++;
				}
				if (strcmp(str, "SUVOJIT", a, b+3)) {
					suvojit++;
				}
			}
			k = k - (str[a++]) * pow(5, 3);
			k = k * 5 + str[++b];
		}

		cout << "SUVO = " << suvo - suvojit << ", SUVOJIT = " << suvojit << endl;
	}

	return 0;
}

bool strcmp(char s[], char m[], long long int a, long long int b)
{
	long long int i = a;
	while (s[i] != '\0' && i <= b) {
		if (s[i] != m[i-a]) {
			break;
		}
		i++;
	}

	if (i > b) return true;
	return false;
}

long long int key(char str[])
{
	long long int k = 0, i;
	for (i = 0; str[i] != '\0'; ++i) {
		k = k * 5 + (str[i]);
	}

	return k;
}
