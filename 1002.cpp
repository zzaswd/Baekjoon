#include <iostream>

using namespace std;

int main_1002() {          ///////////�������϶��� �������� �� ���̽��� �����ؾ��ϴ� ����!
					// sqrt�� ������� �ʴ� ���� : ���ڵ��� ��Һ񱳸� �� ���̱� ������ ���� sqrt�� ���� ����. ���� �ʴ� ���� ����ӵ� ���鿡 ����.
	int num;
	cin >> num;
	for (int t = 0; t < num; t++) {
		int jo[3];
		int bak[3];
		int dis;
		for (int i = 0; i < 3; i++) {
			cin >> jo[i];
		}

		for (int i = 0; i < 3; i++) {
			cin >> bak[i];
		}

		dis = (jo[0] - bak[0]) * (jo[0] - bak[0]) + (jo[1] - bak[1]) * (jo[1] - bak[1]);
		if (dis ==0) {
			if (jo[2] == bak[2]) {
				cout << -1<<'\n';
			}
			else cout << 0 << '\n';
		}

		else {
			if ((jo[2] + bak[2]) * (jo[2] + bak[2]) > dis and dis> (jo[2] - bak[2]) * (jo[2] - bak[2])) {
				cout << 2 << '\n';
			}
			else if ((jo[2] + bak[2]) * (jo[2] + bak[2]) == dis or (jo[2] - bak[2]) * (jo[2] - bak[2]) == dis) {
				cout << 1 << '\n';
			}
			else cout << 0 << '\n';
		}
	}
	return 0;
}