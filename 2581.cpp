#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main_2581() {
	int min, max, sum = 0;
	int min_value;

	cin >> min >> max;
	vector <int> arr;
	arr.assign(10001, 1);
	arr[0] = 0;
	arr[1] = 0;

	for (int i = 2; i <= sqrt(max); i++) {
		if (arr[i] == 1) {
			for (int j = 2 * i; j <= max; j += i) {
				arr[j] = 0;
			}
		}
	}
	
	for (int i = min; i <= max; i++) {
		if (arr[i] == 1) {
			if (sum == 0) min_value = i;
			sum += i;
		}
	}
	if (sum == 0) { cout << - 1; }
	else {
		cout << sum << endl << min_value;
	}
	return 0;
}


/*   ���� § �ڵ�. �����佺�׳׽��� ü ������ �����ϰ� ���������, ���� �������� ���� ���.
     ������, ���� �߰��� �ڵ�� �Ҽ� ���Ҹ� ������ �Ͽ� �������Ƿ� 1~100���� �� �� �ʿ� ����.
	 ������ ���� ���� § �ڵ�� 1~100���� �ϳ��� �� ����, �ű⼭ �Ҽ��� ã��, M �̸��� �Ҽ����� �� ã�Ƽ� ���ִ� ��.

int main_2581() {
	
	int num1, num2;
	cin >> num1 >> num2;
	vector <int> arr;
	arr.assign(10001, -1);
	int m = 10000;
	int sum = 0;

	
	for (int i = 2; i <= num2; i++) {

		int count = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				count++;
				break;
			}
		}
		if (count == 0) {
			arr[i] = 1;
		}
	}
	
	for (int i = 2; i <= num1; i++) {

		int count = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				count++;
				break;
			}
		}
		if (count == 0) {
			arr[i] = -1;
		}
	}
	
	
	for (int i = 2; i < num2; i++) {
		if (arr[i] == 1) {
			m = min(m, i);
			sum += i;
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << endl << m;
	}
	return 0;
}*/