#include<iostream>

using namespace std;


int factorial(int num) {
	if (num <= 1) { // n==1 �� �� �� ���ѷ����� ����.
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