#include <iostream>
using namespace std;

char str[10000];

int main()
{
	scanf("%s", str);
	
	int i, ans = 0;
	for (i = 0; str[i]; ++i) {
		ans += str[i] - 'a' + 1;
	}
	
	cout << ans << endl;
	
	return 0;
}
