#include <iostream>

using namespace std;

int num;


// �Լ������� ����� �� ��. ó������ ��ü���� �˰����� ��Ȯ������,
//compare �Լ� �ȿ� for�������� i<num �� �ƴ� kg[i] >0���� ������ �����ؼ� �ڲ� Ʋ����.


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

/* main �ϳ��� �� �� ��.

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