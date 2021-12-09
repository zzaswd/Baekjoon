#include <iostream>
#include <string>

using namespace std;

int main_2941() {
	string s;
	string croatia[8] = { "c=","c-","d-","lj","nj","s=","z=","dz="};
	string temp;
	cin >> s;

	int count = s.size();

	for (int i = 0; i < s.size() - 1; ) {
		temp = s[i];
		
		temp = temp + s[i + 1];

		if (i < s.size() - 2 and temp + s[i + 2] == croatia[7]) {
			i = i + 2;
			count = count - 2;
		}
		else {
			for (int j = 0; j < 7; j++) {
				if (temp == croatia[j]) {
					i = i + 1;
					count = count - 1;
					break;
				}
			}
		}
		i++;
	}
		cout << count;
		return 0;

}
