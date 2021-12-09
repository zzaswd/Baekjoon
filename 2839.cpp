#include <iostream>

using namespace std;


int main_2839() {
	int kg;
	cin >> kg;
	int div_three, div_five;

	div_five = kg / 5;

	while (1) {
		if (div_five < 0) { cout << -1; return 0; }
		
		else{
			if ((kg - (div_five * 5)) % 3 == 0) { div_three = (kg - (div_five * 5)) / 3; break; }
			div_five = div_five -1;
		}

	}
	cout << div_five + div_three;
	return 0;

}

/*           내가 한 코딩.
int Getcount(int kg) {

	if (kg % 5 == 0) {
		return kg / 5;
	}
	else if (kg % 5 % 3 == 0) {
		return kg / 5 + kg % 5 / 3;
	}
	else {
		for (int i = 1; 5 * i < kg; i++) {
			if ((kg - ((kg / 5) - i) * 5) % 3 == 0) {
				return (kg-((kg / 5) - i) * 5) / 3 + (kg / 5) - i;
			}
		}
		return -1;
	}
}


int main() {
	int kg;
	cin >> kg;
	cout << Getcount(kg);
	
	return 0;
	}
*/