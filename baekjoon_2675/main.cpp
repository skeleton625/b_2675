#include <iostream>
using namespace std;

char i1[21], ni[161];
int t, c, j, k;

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> c >> i1;
		for(j = 0; i1[j] !='\0'; j++)
			for (k = c * j; k < c*(j+1); k++) ni[k] = i1[j];
		ni[k] = '\0';
		cout << ni << endl;
	}
	return 0;
}