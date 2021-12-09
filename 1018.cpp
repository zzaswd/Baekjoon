#include <iostream>

using namespace std;


// 왜 예제 입력 4번이 출력이 31이 나오지..?
// 알았다. 나는 좌측 상단 모서리를 조건으로 나눴었는데
// 우측하단이 W가 되면서 오히려 좌측 상단을 W로 바꾸는 것이 더 적은 횟수.
// 따라서 조건을 만족하지 못한 것.


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



/* 첫번째 시도.
// 전체 행렬에서 x,y를 하나씩 변경해가면서 만들 수 있는 8*8 행렬을 모두 다 B와 W의 개수를 확인해서 구한 방법.
// 사실 이것은 틀림. 왜냐하면 개수는 같더라도 BBBWBW 식으로 나오면 B를 하나 꼭 바꿔야 하므로.

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