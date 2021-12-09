#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main_1316() {
	int num;
	cin >> num;

	int count = num;
	for (int i = 0; i < num; ) {

		vector <int>arr;
		arr.assign(26, -1);

		string s;
		cin >> s;

		arr[(int)(s[0] - 'a')] = 1;

		for (int j = 1; j < s.size(); j++) {
			if (arr[(int)(s[j] - 'a')] == -1) {
				arr[(int)(s[j] - 'a')] = 1;
			}
			else {
				if (s[j - 1] == s[j]) {
					continue;
				}
				else {
					count--;
					break;
				}
			}
		}
		arr.clear();
		i++;
	}
	cout << count;
	return 0;
}