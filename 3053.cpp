#include <iostream>
using namespace std;



int main_3053() { // float num �� double num���� �ٲٴ� ����. ���е��� ������ �ִٰ� ��.
			// #include <cmath>�� ����ߴٸ� ���̰��� ������ �����ϴ� ���� �ƴ� M_PI�� �Լ��� ���� ���� ������ ���� �� ����.
	double num;

	cin >> num;
	cout << fixed;
	cout.precision(6);
	cout << 3.1415926535897932 * num * num << '\n';

	cout << num * num * 2;

	return 0;


}




/*  ���� § �ڵ�.
*  float���� �����ص� ����� ���ϴ´�� ����. ������ Ʋ�ȴٰ� �Ǵ܉�.
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