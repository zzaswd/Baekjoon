#include <iostream>

using namespace std;
 

//���� Ǭ ��2.
// �Է��� �迭�� �����ϰ�, �ι��� �ε������� ����.
// �ش� �ε����� ���� temp���ٰ� �����س���, �� �� �ε������ ���ʴ�� ��.
// ���� �ش� �ε����� ���� �ε���-1 ������ ������ �ε���-1���� ���� �ε����� ����.
// �״��� �ش� �ε��� ���� �ε��� -2 ������ ũ�ٸ� �ε���-2+1�� �ش��ε��� ���� ����.
// �������� �˰�����. �ð����⵵�� �־��� ��츦 �������� �ϹǷ� O(N^2)�̴�.(1,2,3... N-2 N-1 N) 


int main_2750_insertionSort() {
	int num;
	cin >> num;
	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}


	for (int i = 1; i < num; i++) {
		int temp = arr[i];
		int idx = i;
		while (1) {
			if (idx < 1) { arr[idx] = temp; break; }
			if (arr[idx - 1] > temp) arr[idx] = arr[idx - 1];
			else {
				arr[idx] = temp;
				break;
			}
			idx--;
		}
	}
	for (int i = 0; i < num; i++) {
		cout << arr[i] << '\n';
	}

}
/* ���� Ǭ ��.
	// �Է��� �迭�� �����ϰ�, ù��° �ε������� ���� ���� ���ڸ� ���ʴ�� ����.
	// n n-1 n-2 n-3 n-4.... 3 2 1���� ����� ��ħ. --> �迭�� ������� n^2 �ð� ���⵵.
	// ���� ���� �˰�����.

int main_2750_selectionSort() {
	int num;

	cin >> num;

	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		int idx=i;
		for (int j = i+1; j < num; j++) {
			if (arr[idx] > arr[j]) {
				idx = j;
			}
		}

		int temp = arr[idx];
		arr[idx] = arr[i];
		arr[i] = temp;
		
	}


	for (int i = 0; i < num; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}
*/