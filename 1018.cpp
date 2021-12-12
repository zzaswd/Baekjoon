#include <iostream>

using namespace std;

//세번째시도. 도저히 안풀려서 블로그를 참고했음.
// 기준은 나와 비슷한데, 이미 char array을 선언하여 차이의 개수를 구했음.


char black_first[8][8] = {
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'} };

char white_first[8][8] = {
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'} };


int main_1018() {
	int M, N;
	int Min = 2000;

	cin >> M >> N;

	char arr[50][50];

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[j][i];
		}
	}

	for (int s_x = 0; s_x <= M - 8; s_x++) {
		for (int s_y = 0; s_y <= N - 8; s_y++) {
			int count_W = 0;
			int count_B = 0;
			for(int i = s_x; i < s_x + 8; i++) {
				for (int j = s_y; j < s_y+8; j++) {
					if (arr[j][i] != black_first[j-s_y][i-s_x]) 	count_B++; // 이 부분에서 시간이 조금 걸렸는데 
					if (arr[j][i] != white_first[j-s_y][i-s_x]) 	count_W++; // black_first와 white_first의 Index에는 꼭 j-s_y, i-s_x 가 들어가야 함.
				}															   // 똑같이 j와 i가 들어간다면 8*8 배열인 black,white 범위를 벗어나게 됌.
			}
			Min = min(Min, min(count_B, count_W));
		}
	}
	
	cout << Min;
	return 0;
}


/* 두번째 시도.
이전 시도와 다르게, 8*8 첫글자의 글자를 확인하고 그에 해당하는 조건들을 부여.
대부분의 입력들은 원하는대로 출력이 나왔음.

왜 예제 입력 4번이 출력이 31이 나오지.. ?
알았다. 나는 좌측 상단 모서리를 조건으로 나눴었는데
 우측하단이 W가 되면서 오히려 좌측 상단을 W로 바꾸는 것이 더 적은 횟수.
 따라서 조건을 만족하지 못한 것.


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
*/


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