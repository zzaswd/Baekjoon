#include <iostream>

using namespace std;

int num;


// 함수형으로 만들어 본 것. 처음부터 전체적인 알고리즘은 정확했지만,
//compare 함수 안에 for구문에서 i<num 이 아닌 kg[i] >0으로 조건을 설정해서 자꾸 틀렸음.


int compare_7568(int kg[], int height[],int n) {     
	
	int count = 1;

	for (int i = 0; i < num; i++) {
		if (kg[n] < kg[i] and height[n] < height[i]) count++;
	}
	
	return count;
}



int main_7568() {
	
	cin >> num;

	int* kg = new int[num];
	int* height = new int[num];
	
	for (int i = 0; i < num; i++) {
		cin >> kg[i] >> height[i];
	}
	
	for (int i = 0; i < num; i++) {
		cout <<  compare_7568(kg, height, i)<< " ";
		
	}
	return 0;
}

/* main 하나에 다 쓴 것.

int main() {

	int num;
	cin >> num;

	int* kg = new int[num];
	int* height = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> kg[i] >> height[i];
	}

	for (int i = 0; i < num; i++) {
		int count = 1;
		for (int j = 0; j < num; j++) {
			if (kg[i] < kg[j] && height[i] < height[j]) count++;
		}

		cout << count << ' ';
	}
	return 0;
}
*/