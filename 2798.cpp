#include <iostream>
#include <vector>

using namespace std;
/// ���Ʈ������ ���� ������ ��� ���ڿ��� �ϳ��� �����غ��� ������� ��ȣ�� �ص��ϴ� ���.
/// DFS ����Ž���� �̿��� ���.
// ����Լ� DFS�� �����ϴµ�, ������ �� ���� check(���� �ε���),cnt(sum�� ��� ���ߴ���),sum(���� �͵��� �հ�)�̴�.
// �׷��� check�� �ϳ��� �÷����� �Ǵµ�, �ΰ��� ���� ������. 
// 1. ���� �ε��� ���� sum ���� �����Ѵ�.  cnt ++, sum = sum + vec[check]
// 2. ���� �ε��� ���� sum ���� �������� �ʴ´�. cnt= cnt, sum = sum
// Ȯ���ϰ� ���� �ε����� �Ѿ�⶧���� check�� �Ѵ� ++�̴�.
// �̷��� ������ ����Ǹ� ��� 2��Ʈ���� �������� �ǰ�, �� �� 3������ ���� ��, �׸��� check�� �� �ε��� ���� �Ѿ ��, Ȥ�� sum���� target ���� �Ѿ ��. �̷��� �������� �����Ͽ� stop�ϰ� �Ѵ�.

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



/* ���� § �ڵ�. ��� ���̽��� ���� �� ���ϴ� ����.
*	���� �迭�� �� �� �ΰ��� ���� s�� e�� �����ϰ�, �� ������ i��� �Ͽ� �� ���� �ε����� �ش��ϴ� �迭 ���� ���� sum�� �ְ� �� ���� ��ǥ�� �ϴ� num�� ���Ͽ� m ���� ����Ѵ�.
	for ������ �ѹ� �� ������ �� e�� +1�Ͽ� �Ȱ��� ������ �ݺ��Ѵ�. e�� test-2�� �� �� ���� �ݺ��Ѵ�. ������ 0  1 2 3 4  �ε����� ���� �� e�� 4�ε����� ���� i�� ������ �� ���� �����̴�.
	�� for ������ �� ���� �Ǹ� s�� +1�Ͽ� �ٽ� �����Ѵ�. �̴� s�� test -3�� �� ������ �ݺ��Ѵ�. ������ ���� ������ �����̴�.

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