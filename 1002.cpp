#include <iostream>

using namespace std;

int main_1002() {          ///////////내접원일때와 외접원일 때 케이스를 구분해야하는 문제!
					// sqrt를 사용하지 않는 이유 : 숫자들의 대소비교를 할 것이기 때문에 굳이 sqrt를 쓰지 않음. 쓰지 않는 것이 연산속도 측면에 유리.
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