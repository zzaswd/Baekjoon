#include <iostream>
#include <cmath>
using namespace std;


// �� �ڵ�� 1���� n-1���� ��� ���� �� Ȯ���ϴ� ����̴�.
// ���⼭ �˾ư��� �� ���� solution �Լ��̴�. while ���ǹ��� n�� ���� ��, �׸��� sum += n%10;�� n/=10; ���� ��� �ڸ����� �����ִ� ���.
// ���� ū�ڸ������� ���ϰ��� ������, ���⼱ ���� �ڸ������� ���ϴ� ����� �ڵ尡 �ۼ��Ǿ���.
// �׸��� main�Լ� ���� return�� ��ġ�� �����Ҹ� �ϴ�. ������ �����Ǹ� return 0;�� ����Ǹ鼭 cout<<0; ��ü�� ���� �ʴ´�. 
// --> �� ���� ���� �����ϰ� else Ȥ�� else if�� ���� �ʾƵ� �ȴٴ� ���̴�.
// ��������� �� �ڵ庸�� ���� �� �ɸ��ٴ� ���� �����̴�.

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
/*  ���� §��.	���� count�� ���ؼ� ���ڸ� �������� �ľ�.
	�׸��� �ڸ��� * 9 ��ŭ ���� ���ڿ��� ����.(�ִ� �׸�ŭ���� ���� �ſ��� ������ ���̴ϱ�. ���� �� ���� ������ �������� �ְ����� ���� �˳��� ����)
	�� �� �A ���ڿ������� num���� ������� �� ����. ���⼭ ���� ���� �Ǵ� ���� ���� ���� ������. ���� break�� Ż��.
	�ڸ��� ���ϴ� ������ ���� ������ ��.
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