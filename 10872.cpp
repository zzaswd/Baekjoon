#include<iostream>

using namespace std;


int factorial(int num) {
	if (num <= 1) { // n==1 로 할 시 무한루프에 빠짐.
		return 1;
	}
	return num * factorial(num - 1);
}


int main_10872() {
	int num;
	cin >> num;

	cout << factorial(num);

	return 0;
}