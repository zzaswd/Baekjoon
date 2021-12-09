#include <iostream>

using namespace std;

int main_1193() {

	int sum = 0;
	int num;
	int temp;
	cin >> num;

	for (int i = 1; i < 10000000; i++) {
		sum = sum + i;
		
		if (sum >= num) {
			temp = sum - num;
			if (i % 2 == 1) {
				cout << temp + 1<<'/' << i-temp;
			}
			else {
				cout << i-temp << '/' << temp+1;
			}
			break;
		}
		else continue;

	}
	return 0;

}

