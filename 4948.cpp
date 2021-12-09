#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main_4948() {  ///////// �Ʒ� ����� vector�� ����� �迭 ����. �׸��� ���� �ڵ�� bool type���� ����.
				/// vector : 76ms ,  bool : 40ms Ȯ���� ���� �ӵ��� ������.

	while (1) {
		int num;
		int count = 0;
		bool* arr;
		cin >> num;
		if (num == 0) break;

		
		arr = new bool[2 * num + 1];
		fill_n(arr, 2 * num + 1, 1);
		arr[0] = 0;
		arr[1] = 0;

		for (int i = 2; i * i <= 2 * num; i++) {   /// 2*i���ƴ϶� i*i���� Ȯ���ϴ� ������ �˾ƾ� ��.
													// 2*i���� �ϸ� 2*2 3*2 4*2 ���� 2*3 3*3 4*3 �����ϴµ� ���⼭ 2*3�� �̹� �տ��� 3*2�� ��.
													// �׷��� i*i�����ϸ� �� �� �͵��� �ٽ� ���� �� ����.
			if (arr[i] == 1) {
				for (int j = 2 * i; j <= 2 * num; j += i) {
					arr[j] = 0;
				}
			}
		}

		for (int i = num + 1; i <= 2 * num; i++) {
			if (arr[i] == 1) {
				count++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}

/*
int main() {

	while (1) {
		int num;
		int count = 0;
		cin >> num;
		if (num == 0) break;
		
		vector <int> arr;

		arr.assign(246913,1);

		arr[0] = 0;
		arr[1] = 0;
		for (int i = 2; i*i <= 2 * num; i++) {
			if (arr[i] == 1) {
				for (int j = 2 * i; j <= 2 * num; j += i) {
					arr[j] = 0;
				}
			}
		}

		for (int i = num + 1; i <= 2 * num; i++) {
			if (arr[i] == 1) {
				count++;
			}
		}
		cout << count<<"\n";
	}
	return 0;
}
*/