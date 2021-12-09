#include <iostream>
using namespace std;



int main_9020() {   /// 에라토스테네스 체를 이용한 것인데, even의 수를 먼저 받고 max값을 선정해서 그만큼 prime 구할 수를 최적화 함.
				// 그리고 결국 어떤 짝수는 N/2 + i 와 N/2 -i의 합과 같다는 점을 이용해 배열에서 저 조건을 만족하는 수이며, 그 수가 true일 때 출력.
	int num, max = 0;
	cin >> num;

	int* even = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> even[i];
		if (even[i] > max) max = even[i];
	}


	bool* prime = new bool[max + 1];
	fill_n(prime, max + 1, 1);
	
	prime[0] = 0;
	prime[1] = 0;
	
	for (int i = 2; i * i <= max; i++) {
		if (prime[i] == true) {
			for (int j = i * i; j <= max; j += i) {
				prime[j] = false;
			}
		}
	}

	for (int t = 0; t < num; t++) {
		for (int k = even[t] / 2; k > 0; k--) {
			if (prime[k] && prime[even[t] - k]) {
				cout << k << " " << even[t] - k << "\n";
				break;
			}
		}
	}
	return 0;
}


/* 내가 짠 것. 동작은 정상적으로 하나 제출하면 런타임 에러가 나옴.. 이유를 못 찾겠음.
* 
bool arr[10001];

int main() {
	arr[0] = 1;
	arr[1] = 1;
	int test;
	int num;
	vector <int> prime;

	for (int i = 2; i * i <= 10000; i++) {
		if (arr[i] == 0) {
			prime.push_back(i);
			for (int j = i * i; j <= 10000; j += i) {
				arr[j] = 1;
			}
		}
	}

	cin >> test;
	
	for (int i = 0; i < test; i++) {
		cin >> num;
		int temp = 0;
		int count = 0;
		for (int j = 0; prime[j] <= num / 2 ; j++) {
			if (prime[j] == num / 2) {
				cout << prime[j] << " " << prime[j] << "\n";
				count++;
			}
			temp = j;

		}

		if (count == 0) {
			int s = temp;
			int e = temp;

			while (1) {
				if(prime[s]+prime[e] == num) {
				cout << prime[s] << " " << prime[e] << "\n";
				break;
				}

				else if (prime[s] + prime[e] > num) {
					s--;
				}
				else {
					e++;
				}
			}
		}
	}
	return 0;
}
*/