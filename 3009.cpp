#include <iostream>

using namespace std;

int main_3009() { /////////�����ʿ��� ����ϴ� ���. 
			// xor�� �̿��� ����ε�, �̸� ���� ��ȣȭ�� ��ȣȭ�� �̷����.
			//A^B^B�ϸ� A�� ����.
	int a_x, a_y, b_x, b_y, c_x, c_y;
	int d_x, d_y;
	cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y;


	d_x = a_x ^ b_x ^ c_x;
	d_y = a_y ^ b_y ^ c_y;

	cout << d_x << " " << d_y;
	return 0;


}


/*        ���� �� ��. ������ if�� ���� ã�� �� ��.
int main() {
	int a_x, a_y, b_x, b_y, c_x, c_y;
	int d_x, d_y;
	cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y;

	if (a_x == b_x) { d_x = c_x; } 
	else if(a_x==c_x) { d_x = b_x; }
	else { d_x = a_x; }


	if (a_y == b_y) { d_y = c_y; }
	else if (a_y == c_y) { d_y = b_y; }
	else { d_y = a_y; }

	cout << d_x << " " << d_y;
	return 0;



}
*/