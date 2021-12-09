#include <iostream>
#include <vector>

using namespace std;
/// 브루트포스란 조합 가능한 모든 문자열을 하나씩 대입해보는 방식으로 암호를 해독하는 방법.
/// DFS 완전탐색을 이용한 방법.
// 재귀함수 DFS를 선언하는데, 변수를 총 세개 check(현재 인덱스),cnt(sum에 몇번 더했는지),sum(더한 것들의 합계)이다.
// 그래서 check을 하나씩 늘려가게 되는데, 두가지 경우로 나뉜다. 
// 1. 현재 인덱스 값을 sum 값에 포함한다.  cnt ++, sum = sum + vec[check]
// 2. 현재 인덱스 값을 sum 값에 포함하지 않는다. cnt= cnt, sum = sum
// 확인하고 다음 인덱스로 넘어가기때문에 check은 둘다 ++이다.
// 이러한 절차가 진행되면 계속 2진트리가 내려가게 되고, 그 중 3개값을 더한 것, 그리고 check가 총 인덱스 값을 넘어간 것, 혹은 sum값이 target 값을 넘어간 것. 이렇게 세가지를 감지하여 stop하게 한다.

int test, target;
vector <int> vec;
int max_num = 0;

void DFS_2798(int check, int cnt, int sum) {
	if (cnt == 3) {
		if (sum <= target) {
			max_num = max(sum, max_num);
		}
		return;
	}

	if (check >= test || sum > target) {
		return;
	}

	DFS_2798(check + 1, cnt + 1, sum + vec[check]);
	DFS_2798(check + 1, cnt, sum);
}




int main_2798() {

	cin >> test >> target;
	for (int i = 0; i < test; i++) {
		int num;
		cin >> num;
		vec.push_back(num);
	}
	DFS_2798(0, 0, 0);

	cout << max_num;
	return 0;
}



/* 내가 짠 코드. 모든 케이스를 직접 다 더하는 과정.
*	먼저 배열의 맨 앞 두개를 각각 s와 e로 선언하고, 그 다음을 i라고 하여 각 세개 인덱스에 해당하는 배열 값의 합을 sum에 넣고 그 값을 목표로 하는 num과 비교하여 m 값에 기록한다.
	for 구문이 한번 다 돌았을 때 e를 +1하여 똑같은 과정을 반복한다. e가 test-2이 될 때 까지 반복한다. 이유는 0  1 2 3 4  인덱스가 있을 때 e가 4인덱스로 가면 i가 존재할 수 없기 때문이다.
	이 for 구문도 다 돌게 되면 s를 +1하여 다시 진행한다. 이는 s가 test -3이 될 때까지 반복한다. 이유는 위와 동일한 원리이다.

*   
int main() {

	int test, num;
	int m = 0;
	int sum=0;
	cin >> test >> num;

	int *arr= new int[test];
	for (int i = 0; i < test; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < test - 2; j++) {
		int s = j;
		for (int k = 1; s + k < test - 1; k++) {
			int e = s + k;

			for (int i = e + 1; i < test; i++) {
				sum = arr[s] + arr[e] + arr[i];
				if (sum > m and sum <= num) {
					m = sum;
				}
			}
		}
	}
	cout << m << endl;
	return 0;
}

*/