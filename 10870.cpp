#include <iostream>

using namespace std;


int memo[50];
 

int fibo_memo_10870(int num) { // �޸������̼��� ��������ν� �ѹ� ������ memo���� �ٽ� �������� ���� 
						// --> �ð����⵵ = O(N)
						// �� �� �Ǻ���ġ�� ���� �����鵵 �ִµ�
						// https://www.acmicpc.net/blog/view/28 �����ϱ�.
	if (num <= 1) return num;

	else {
		if (memo[num] != 0) return memo[num];
		else return memo[num] = fibo_memo_10870(num - 1) + fibo_memo_10870(num - 2);
	}
}

int main_10870() {
	int num;
	cin >> num;
	cout << fibo_memo_10870(num);
	return 0;
}
/*
int fibo_10870(int num) {  // ã�� �ڵ�. ���� �迭�� �Ƚᵵ ����Լ��� ���鼭 0 1 1 ���� ������ ���ư�.
							// �������δ� ���� §�ڵ峪 �̰ų� �Ѵ� �ð����⵵�� O(2^N).
							// �̰��� �ð� ����ȭ �Ϸ��� �޸������̼� Ȱ���ؾ���.
	if (num <= 1) return num;
	
	return fibo_10870(num - 1) + fibo_10870(num - 2);
}
int main_10870() {
	int num;
	cin >> num;
	cout <<fibo_10870(num);
}

*/
/* ���� § �ڵ�. �迭�� ����ؼ� ���� �����ؾ��� �� �˾Ҿ��µ� ã�ƺ��� ���� �迭�� �Ƚᵵ ��.

int fibo(int *arr,int num) {
	
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else {
		return fibo(arr, num - 1) + fibo(arr, num - 2);
	}
}


int main() {
	int num;
	cin >> num;

	int* arr = new int[num];

	cout << fibo(arr, num);

	return 0;
}
*/