#include <iostream>

using namespace std;


int sum_2775(int k, int n) {      ////////// 내가 하고 싶었던 것. 재귀함수를 이용한 계산. // 어 근데 재귀함수가 88ms  배열 선언한게 4ms. 오히려 배열이 더 빠르넹..!
	
	if (k == 0) {
		return n;
	}
	if (n == 1) {
		return 1;
	}
	return sum_2775(k - 1, n) + sum_2775(k, n - 1);
}


int main_2775() {

	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int k, n;
		cin >> k >> n;
		cout << sum_2775(k, n) << endl;
	}
	return 0;

}
/*           내가 한 것. 배열을 만들어서 저장하고 값을 찾아오는 코드
int sum(int k, int n) {
	int result;
	int arr[15][14];

	for (int i = 0; i <= k; i++) {
		arr[i][0] = 1;
	}
	for (int i = 0; i < n; i++) {
		arr[0][i] = i+1;
	}

	for (int i = 1; i <= k; i++) {

		for (int j = 1; j < n; j++) {
			arr[i][j] = arr[i-1][j] + arr[i][j - 1];
		}
	}
	result = arr[k][n - 1];

	cout << result << endl;
	return 0;
}

int main() {
	int test;
	int k, n;

	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> k >> n;
		sum(k, n);
	}
	return 0;

}

*/