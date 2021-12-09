#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main_4948() {  ///////// 아래 방법은 vector을 사용해 배열 선언. 그리고 지금 코드는 bool type으로 선언.
				/// vector : 76ms ,  bool : 40ms 확실히 빠른 속도를 보여줌.

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

		for (int i = 2; i * i <= 2 * num; i++) {   /// 2*i가아니라 i*i부터 확인하는 이유를 알아야 함.
													// 2*i부터 하면 2*2 3*2 4*2 다음 2*3 3*3 4*3 진행하는데 여기서 2*3은 이미 앞에서 3*2로 함.
													// 그래서 i*i부터하면 그 전 것들을 다시 안할 수 있음.
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