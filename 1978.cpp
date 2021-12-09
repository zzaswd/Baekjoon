#include <iostream>

using namespace std;

int main_1978() { // 에라토스테네스의 소수필요충분 조건 활용.
			 //주어진 자연수 N이 소수이기 위한 필요 충분조건은 N이 N의 제곱근보다 크지 않은 어떤 소수로도 나눠지지 않는다. 
			 //수가 수를 나누면 몫이 발생하게 되는데 몫과 나누는 수, 둘 중 하나는 반드시 $\sqrt{N}$ 이하이기 때문이다.
	int Test;
	cin >> Test;
	int count = Test;

	for (int i = 0; i < Test; i++) {
		int num;
		cin >> num;

		if (num == 1) count--;
		else if (num == 2) continue;
		else {
			for (int j = 2; j <= sqrt(num); j++) {
				if (num % j == 0) {
					count--;
					break;
				}
			}

		}
	}
	cout << count;

	return 0;
}


/*     내가 생각한 일반적인 접근. 2보다 큰 입력값일 땐 num 보다 작은 수로 다 나눠보는 것.
	   단점은 오래 걸린다는 것.
int main_1978() {
	
	int Test;
	cin >> Test;
	int count = Test;
	for (int i = 0; i < Test; i++) {
		int num;
		cin >> num;

		if (num == 1) count--;
		else if (num == 2) continue;
		else {
			for (int j = 2; j < num; j++) {
				if (num % j == 0) {
					count--;
					break;
				}
			}
		}
	}

	cout << count;

	return 0;
}
*/