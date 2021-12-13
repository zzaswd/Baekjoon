#include <iostream>

using namespace std;
 

//내가 푼 것2.
// 입력을 배열로 저장하고, 두번쨰 인덱스부터 시작.
// 해당 인덱스의 값을 temp에다가 저장해놓고, 그 전 인덱스들과 차례대로 비교.
// 만약 해당 인덱스의 값이 인덱스-1 값보다 작으면 인덱스-1값을 현재 인덱스로 저장.
// 그다음 해당 인덱스 값이 인덱스 -2 값보다 크다면 인덱스-2+1에 해당인덱스 값을 넣음.
// 삽입정렬 알고리즘임. 시간복잡도는 최악의 경우를 기준으로 하므로 O(N^2)이다.(1,2,3... N-2 N-1 N) 


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
/* 내가 푼 것.
	// 입력을 배열로 저장하고, 첫번째 인덱스부터 가장 작은 숫자를 차례대로 스왑.
	// n n-1 n-2 n-3 n-4.... 3 2 1번의 계산을 거침. --> 배열과 관계없이 n^2 시간 복잡도.
	// 선택 정렬 알고리즘임.

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