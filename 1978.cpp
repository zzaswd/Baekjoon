#include <iostream>

using namespace std;

int main_1978() { // �����佺�׳׽��� �Ҽ��ʿ���� ���� Ȱ��.
			 //�־��� �ڿ��� N�� �Ҽ��̱� ���� �ʿ� ��������� N�� N�� �����ٺ��� ũ�� ���� � �Ҽ��ε� �������� �ʴ´�. 
			 //���� ���� ������ ���� �߻��ϰ� �Ǵµ� ��� ������ ��, �� �� �ϳ��� �ݵ�� $\sqrt{N}$ �����̱� �����̴�.
	int Test;
	cin >> Test;
	int count = Test;

	for (int i = 0; i < Test; i++) {
		int num;
		cin >> num;

		if (num == 1) count--;
		else if (num == 2) continue;
		else {
			for (int j = 2; j <= sqrt(num); j++) {
				if (num % j == 0) {
					count--;
					break;
				}
			}

		}
	}
	cout << count;

	return 0;
}


/*     ���� ������ �Ϲ����� ����. 2���� ū �Է°��� �� num ���� ���� ���� �� �������� ��.
	   ������ ���� �ɸ��ٴ� ��.
int main_1978() {
	
	int Test;
	cin >> Test;
	int count = Test;
	for (int i = 0; i < Test; i++) {
		int num;
		cin >> num;

		if (num == 1) count--;
		else if (num == 2) continue;
		else {
			for (int j = 2; j < num; j++) {
				if (num % j == 0) {
					count--;
					break;
				}
			}
		}
	}

	cout << count;

	return 0;
}
*/