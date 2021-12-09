#include <iostream>

using namespace std;

int main_1929() {  //배열을 bool type으로 선언. bool은 true & false 밖에 없는데 1byte 소요. 
				// int의 경우 4byte 소요. 속도에서 차이가 있을 까봐 했는데 딱히 차이는 없어보이고
				// 중요한 것은 endl이 \n 보다 훨씬 오래 걸린다는 점.

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
			cout << i << "\n";   //와.. 이거 개화난다.. endl쓰면 겁나 시간초관데
								// "\n"쓰니까 시간초과 해결.
		}
	}

	return 0;
}






/*  배열을 int로 선언.
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