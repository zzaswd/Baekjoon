#include <iostream>
#include <string>
using namespace std;


//�� �ڵ� ���� ��α׸� ����.
// �� �ڵ� ���� 1�� ���ذ��� 6,6,6�� �������� �̷���� �κ��� Ž��.
// �ٸ� string�� find�Լ��� ������� �ʰ� and ������ �̿��Ͽ� Ž��.
// series�� ������ ������ �ǹ��ϸ�, num�� �������ٸ� break�ϰ� ���.
//�ӵ����鿡���� ���ڵ尡 50ms�ν� �Ʒ����� 30ms���� ����.

int main_1436() { 

	int num;
	int series = 0;
	int i = 666;
	cin >> num;

		while (1) {
			string temp = to_string(i);
			for (int j = 0; j < temp.length() - 2; j++) {
				if (temp[j] == '6' && temp[j + 1] == '6' && temp[j + 2] == '6') {
					series++;
					break;
				}
			}
			if (series == num) {
				cout << i;
				break;
			}
			i++;

		}
	



	return 0;
}
/*
int main_1436() { // ����ϴٰ� �ᱹ ��α� ����.
			// string���� ��ȯ�Ͽ� 666 ���ڿ��� ���� ���� ���涧���� 1�� ����. �̰��� �ֿ� ����Ʈ.
			//���� ������ �����ؼ� 5666 --> 6660 6661 ���� �ٲ�� ��Ģ�� ã�ƺ���������,
			//���� 1�� ���ϸ鼭 666�̶� ���ڰ� ����ٸ� �װ��� �ᱹ �ּҰ��� ��.
			//result�� 665�� �� ���� ���� ����ð��� ���̱� ����.
			// ������ ���� temp.find()�ȿ� 666�� �ƴ� "666"�� �־���� ��. �׷��� ������ ���ѷ����� ����.

	int num;
	int result = 665;
	string temp;

	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		
		while (1) {
			result++;
			temp = to_string(result);
			if (temp.find("666") != -1) {
				break;
			}
		}

	}
	cout << result;

	return 0;
}

*/