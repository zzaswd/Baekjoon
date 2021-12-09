#include <iostream>

using namespace std;

int main_1929() {  //�迭�� bool type���� ����. bool�� true & false �ۿ� ���µ� 1byte �ҿ�. 
				// int�� ��� 4byte �ҿ�. �ӵ����� ���̰� ���� ��� �ߴµ� ���� ���̴� ����̰�
				// �߿��� ���� endl�� \n ���� �ξ� ���� �ɸ��ٴ� ��.

	int min, max;
	bool *arr;

	cin >> min >> max;

	arr = new bool[max + 1];

	fill_n(arr,max+1 , 1);

	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i * i <= max; i++) {
		if (arr[i] == true) {
			for (int j = i * i; j <= max; j += i) {
				arr[j] = false;
			}
		}
	}


	for (int i = min; i <= max; i++) {
		if (arr[i] == true) {
			cout << i << "\n";   //��.. �̰� ��ȭ����.. endl���� �̳� �ð��ʰ���
								// "\n"���ϱ� �ð��ʰ� �ذ�.
		}
	}

	return 0;
}






/*  �迭�� int�� ����.
* 
int main() {
	int min, max;
	vector <int> arr;
	arr.assign(1000001, 1);
	arr[0] = 0;
	arr[1] = 0;

	cin >> min >> max;

	for (int i = 2; i*i <= max; i++) {
		if (arr[i] == 1) {
			for (int j = i * i; j <= max; j += i) {
				arr[j] = 0;
			}
		}
	}


	for (int i = min; i <= max; i++) {
		if (arr[i] == 1) {
			cout << i << endl;
		}
	}

	return 0;
}
*/