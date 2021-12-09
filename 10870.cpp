#include <iostream>

using namespace std;


int memo[50];
 

int fibo_memo_10870(int num) { // 메모이제이션을 사용함으로써 한번 실행한 memo값은 다시 실행하지 않음 
						// --> 시간복잡도 = O(N)
						// 그 외 피보나치에 대한 꿀팁들도 있는데
						// https://www.acmicpc.net/blog/view/28 참고하기.
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
int fibo_10870(int num) {  // 찾은 코드. 굳이 배열을 안써도 재귀함수가 돌면서 0 1 1 부터 차근히 돌아감.
							// 단점으로는 내가 짠코드나 이거나 둘다 시간복잡도가 O(2^N).
							// 이것을 시간 최적화 하려면 메모이제이션 활용해야함.
	if (num <= 1) return num;
	
	return fibo_10870(num - 1) + fibo_10870(num - 2);
}
int main_10870() {
	int num;
	cin >> num;
	cout <<fibo_10870(num);
}

*/
/* 내가 짠 코드. 배열을 사용해서 값을 저장해야할 줄 알았었는데 찾아보니 굳이 배열을 안써도 됌.

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