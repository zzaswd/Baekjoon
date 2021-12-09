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


/*   내가 짠 코드. 에라토스테네스의 체 원리를 이해하고 만들었지만, 완전 원리보단 느린 방법.
     이유는, 위에 추가한 코드는 소수 원소를 정수배 하여 지워가므로 1~100까지 다 볼 필요 없음.
	 하지만 내가 직접 짠 코드는 1~100까지 하나씩 다 보고, 거기서 소수를 찾고, M 미만의 소수들을 또 찾아서 뺴주는 것.

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