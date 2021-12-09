#include <iostream>
#include <algorithm>
using namespace std;

int main_4153() {

	while (1) {
		int a[3];
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}

		sort(a, a + 3);
		if (a[0] == 0 and a[1] == 0 and a[2] == 0) break;
	    
		if (a[2] * a[2] == a[1] * a[1] + a[0] * a[0]) {
			cout << "right" << '\n';
		}
		else cout << "wrong" << '\n';
	}
	return 0;
}



/* 내가 한 것. 너무 원리에 입각해서 한 듯.
int main() {

	
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if (a== 0 and b==0 and  c == 0) {
			break;
		}
		else if (c * c == a * a + b * b or a * a == b * b + c * c or b * b == a * a + c * c) {
			cout << "right" << '\n';
		}

		else cout << "wrong" << '\n';
		
	}
	return 0;
}
*/