#include <iostream>

using namespace std;


int sum_2775(int k, int n) {      ////////// ���� �ϰ� �;��� ��. ����Լ��� �̿��� ���. // �� �ٵ� ����Լ��� 88ms  �迭 �����Ѱ� 4ms. ������ �迭�� �� ������..!
	
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
/*           ���� �� ��. �迭�� ���� �����ϰ� ���� ã�ƿ��� �ڵ�
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