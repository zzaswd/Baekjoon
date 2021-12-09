#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

string deohagi_10757(string a, string b) {   ///////인터넷에서 본 것. 너무 깔끔해서 좋다.
	int sum = 0;
	string res;
	
	while (!a.empty() || !b.empty() || sum) {
		if (!a.empty()) {
			sum += a.back() - '0';
			a.pop_back();
		}
		if (!b.empty()) {
			sum += b.back() - '0';
			b.pop_back();
		}

		res.push_back((sum % 10) + '0');
		sum /= 10;
	}

	reverse(res.begin(), res.end());
	return res;
}

int main_10757() {
	string a, b;
	cin >> a >> b;
	cout << deohagi_10757(a, b);
	return 0;
}

/*   ////// 내가 한 것. String으로 받아서 각 자리 수를 int 형으로 변환하여 계산.
int main() {

	string A, B;
	
	cin >> A >> B;
	
	int Dis = A.length() - B.length();
	int adder = 0;


	if (Dis > 0) {
		for (int i = 0; i < Dis; i++) {
			B = '0' + B;
		}
	}
	else {
		for (int i = 0; i > Dis; i--) {
			A = '0' + A;
		}
	}

	for (int i = A.length() - 1; i >= 0; i--) {

		if ((int)(A[i] - '0') + (int)(B[i] - '0') + adder >= 10) {
			A[i] = (char)((int)(A[i] - '0') + (int)(B[i] - '0') + adder - 10 + 48);
			adder = 1;
		}
		else {
			A[i] = (char)((int)(A[i] - '0') + (int)(B[i] - '0') + adder + 48);
			adder = 0;
		}
	}

	if (adder == 1) {
		A = '1' + A;
	}

	cout << A;

}
*/