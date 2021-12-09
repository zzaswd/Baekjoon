#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main_11653() {
	int num;
	cin >> num;

	for (int i = 2; i <= num; i++) {
		while (num % i == 0) {
			cout << i << endl;
			num = num / i;
		}
	}
	return 0;

}


/*   ���� Ǭ ��. �ʹ� �����佺�׳׽��� �����ϴ� ���� �� ���� ����� �־������� �ұ��ϰ� ����� ���� ���ع���.
* 
int main_11653() {
	int num;
	vector <int> arr;
	arr.assign(10000000, 1);

	cin >> num;

	arr[0] = 0;
	arr[1] = 0;

	for (int i = 2; i <= sqrt(num); i++) {
		if (arr[i] == 1) {
			for (int j = i * 2; j <= num; j += i) {
				arr[j] = 0;
			}
		}
	}


	for (int i = 2; i <= num; i++) {
		if (arr[i] == 1) {
			while (num % i == 0) {
				cout << i << endl;
				num = num / i;
			}
		}
	}

	return 0;
}
*/