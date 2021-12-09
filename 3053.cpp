#include <iostream>
using namespace std;



int main_3053() { // float num 을 double num으로 바꾸니 성공. 정밀도에 문제가 있다고 함.
			// #include <cmath>을 사용했다면 파이값을 저렇게 나열하는 것이 아닌 M_PI란 함수를 통해 쉽게 원주율 얻을 수 있음.
	double num;

	cin >> num;
	cout << fixed;
	cout.precision(6);
	cout << 3.1415926535897932 * num * num << '\n';

	cout << num * num * 2;

	return 0;


}




/*  내가 짠 코드.
*  float으로 선언해도 출력은 원하는대로 나옴. 하지만 틀렸다고 판단됌.
* 
int main() {
	float num;

	cin >> num;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout << 3.1415926535897932 * num * num << '\n';

	cout <<num* num * 2;

	return 0;


}
*/ 