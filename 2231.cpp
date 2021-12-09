#include <iostream>
#include <cmath>
using namespace std;


// 이 코드는 1부터 n-1까지 모든 것을 다 확인하는 방법이다.
// 여기서 알아가야 할 것은 solution 함수이다. while 조건문에 n을 넣은 것, 그리고 sum += n%10;과 n/=10; 으로 모든 자리수를 더해주는 방법.
// 나는 큰자리수부터 더하고자 했지만, 여기선 작은 자리수부터 더하니 깔끔한 코드가 작성되었다.
// 그리고 main함수 내의 return의 위치도 참고할만 하다. 조건이 만족되면 return 0;가 실행되면서 cout<<0; 자체를 하지 않는다. 
// --> 이 말은 괜히 번잡하게 else 혹은 else if를 하지 않아도 된다는 것이다.
// 깔끔하지만 내 코드보단 조금 더 걸리다는 점이 단점이다.

int solution_2231(int n) {
	int sum = n;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main_2231() {
	int num;
	cin >> num;

	for (int i = 1; i < num; i++) {
		if (num == solution_2231(i)) {
			cout << i;
				return 0;
		}
	}
	cout << 0;
	return  0;
	

}
/*  내가 짠것.	먼저 count를 통해서 몇자리 수인지를 파악.
	그리고 자리수 * 9 만큼 원래 숫자에서 뺴줌.(최대 그만큼보다 작은 거에서 시작할 것이니깐. 물론 더 작은 범위를 잡을수도 있겠지만 조금 넉넉히 잡음)
	그 후 뺸 숫자에서부터 num까지 순서대로 다 만들어봄. 여기서 가장 먼저 되는 것이 가장 작은 생성자. 따라서 break로 탈출.
	자리수 더하는 공식은 직접 유도한 것.
	2145 
	2145 %10000 / 1000 = 2
	2145 %1000 / 100 = 1
	2145 %100 / 10 = 4
	2145 %10 / 1 = 5




int main() {

	int num;
	int temp;
	int check = 0;

	cin >> num;
	temp = num;

	int count = 1;
	while (true) {
		if (temp / 10 == 0) {
			break;
		}
		else {
			temp /= 10;
			count++;
		}
	}
	
	for (int i = num - count * 9; i < num; i++) {
		int sum=i;
		for (int j = count; j > 0; j--) {
			sum = sum + i % (int)pow(10, j) / pow(10, j - 1);
		}

		if (sum == num) {
			cout << i;
			check++;
			break;
		}
	}
	if (check == 0) {
		cout << 0;
	}
	return 0;
}
*/