#include <iostream>
#include <string>
using namespace std;


//이 코드 역시 블로그를 참조.
// 이 코드 역시 1씩 더해가며 6,6,6이 연속으로 이루어진 부분을 탐색.
// 다만 string의 find함수를 사용하지 않고 and 구문을 이용하여 탐색.
// series는 수열의 순서를 의미하며, num과 같아진다면 break하고 출력.
//속도측면에서는 위코드가 50ms로써 아래보다 30ms정도 빠름.

int main_1436() { 

	int num;
	int series = 0;
	int i = 666;
	cin >> num;

		while (1) {
			string temp = to_string(i);
			for (int j = 0; j < temp.length() - 2; j++) {
				if (temp[j] == '6' && temp[j + 1] == '6' && temp[j + 2] == '6') {
					series++;
					break;
				}
			}
			if (series == num) {
				cout << i;
				break;
			}
			i++;

		}
	



	return 0;
}
/*
int main_1436() { // 고민하다가 결국 블로그 참조.
			// string으로 변환하여 666 문자열과 같은 것이 생길때까지 1씩 더함. 이것이 주요 포인트.
			//나는 수열을 나열해서 5666 --> 6660 6661 으로 바뀌는 규칙을 찾아보려했지만,
			//그저 1씩 더하면서 666이란 글자가 생겼다면 그것이 결국 최소값이 됌.
			//result를 665로 둔 것은 최초 연산시간을 줄이기 위함.
			// 주의할 점은 temp.find()안에 666이 아닌 "666"을 넣어줘야 함. 그렇지 않으면 무한루프에 빠짐.

	int num;
	int result = 665;
	string temp;

	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		
		while (1) {
			result++;
			temp = to_string(result);
			if (temp.find("666") != -1) {
				break;
			}
		}

	}
	cout << result;

	return 0;
}

*/