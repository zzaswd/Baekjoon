#include <iostream>

using namespace std;


// �� ���� �Է� 4���� ����� 31�� ������..?
// �˾Ҵ�. ���� ���� ��� �𼭸��� �������� �������µ�
// �����ϴ��� W�� �Ǹ鼭 ������ ���� ����� W�� �ٲٴ� ���� �� ���� Ƚ��.
// ���� ������ �������� ���� ��.


int main() {
	int M, N;
	cin >> M >> N;


	char x[50][50];

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> x[j][i];
		}
	}


	int Min = 2000;

	for (int s_x = 0; s_x <= M - 8; s_x++) {
		for (int s_y = 0; s_y <= N - 8; s_y++) {

			int diff = 0;

			for (int i = s_x; i < s_x + 8; i++) {
				for (int j = s_y; j < s_y + 8; j++) {
					if (x[s_y][s_x] == 'B') {
						if ((i - s_x) % 2 == 0 && (j - s_y) % 2 == 0) {
							if (x[j][i] == 'W') {
								diff++;
							}
						}
						if ((i - s_x) % 2 == 0 && (j - s_y) % 2 == 1) {
							if (x[j][i] == 'B') {
								diff++;
							}
						}
						if ((i - s_x) % 2 == 1 && (j - s_y) % 2 == 0) {
							if (x[j][i] == 'B') {
								diff++;
							}
						}
						if ((i - s_x) % 2 == 1 && (j - s_y) % 2 == 1) {
							if (x[j][i] == 'W') {
								diff++;
							}
						}
					}

					else {
						if ((i - s_x) % 2 == 0 && (j - s_y) % 2 == 0) {
							if (x[j][i] == 'B') {
								diff++;
							}
						}
						if ((i - s_x) % 2 == 0 && (j - s_y) % 2 == 1) {
							if (x[j][i] == 'W') {
								diff++;
							}
						}
						if ((i - s_x) % 2 == 1 && (j - s_y) % 2 == 0) {
							if (x[j][i] == 'W') {
								diff++;
							}
						}
						if ((i - s_x) % 2 == 1 && (j - s_y) % 2 == 1) {
							if (x[j][i] == 'B') {
								diff++;
							}
						}
					}

				}
			}
			Min = min(Min, diff);
		}
	}

	cout << Min;
}



/* ù��° �õ�.
// ��ü ��Ŀ��� x,y�� �ϳ��� �����ذ��鼭 ���� �� �ִ� 8*8 ����� ��� �� B�� W�� ������ Ȯ���ؼ� ���� ���.
// ��� �̰��� Ʋ��. �ֳ��ϸ� ������ ������ BBBWBW ������ ������ B�� �ϳ� �� �ٲ�� �ϹǷ�.

int main() {
	int M, N;
	cin >> M >> N;

	
	char x[50][50];

	for (int i = 0; i < M ; i++) {
		for (int j = 0; j < N; j++) {
			cin >> x[j][i];
		}
	}
	int Min = 150;
	for (int s_x = 0; s_x <=M - 8; s_x++) {
		for (int s_y = 0; s_y <= N - 8; s_y++) {	
			int count_B = 0;
			int count_W = 0;

			for (int i = s_x; i < s_x + 8; i++) {
				for (int j = s_y; j < s_y + 8; j++) {
					if (x[j][i] == 'B') {
						count_B += 1;
					}
					else{
						count_W += 1;
					}
				}

			}
			if (count_B > count_W) {
				Min = min(Min, (count_B - count_W)/2);
			}
			else {
				Min = min(Min, (count_W - count_B)/2);
			}
			cout << count_B << ' ' << count_W << '\n';

			cout << Min<<'\n';
			cout << "--------------------"<<'\n';
		}

	}
}
*/