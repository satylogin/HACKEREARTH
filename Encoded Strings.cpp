#include <iostream>
using namespace std;

char str[1000000];

int main()
{
	int i, j, k, sm = 0;
	
	gets(str);
	for (i = 0; str[i]; ++i) {
		sm += (str[i] - 'a' + 1);
	}
	
	i--;
	if (!((str[i] - 'a' + 1) & 1) && (sm%3 == 0)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
    
    return 0;
}
