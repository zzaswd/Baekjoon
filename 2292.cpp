#include <iostream>
using namespace std;

int main_2292() {
	int sum = 1;
	int num;
	cin >> num;

	
	for (int i = 0; i < 1000000; i++) {
		sum = i * 6 + sum;
		if(sum>=num){
			cout << i + 1;
			break;
			}
	}

	return 0;

}