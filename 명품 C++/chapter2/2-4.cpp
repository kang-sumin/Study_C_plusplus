/*
* �Ǽ� 5���� �Է¹޾� ���� ū�� ����ϴ� ���α׷�
*/

#include <iostream>
using namespace std;

int main() {

	double arr_double[5];	//5���� �Ǽ��� ������ double�� �迭 ����
	double max = 0;		//ū���� ������ ���� ����
	
	cout << "5 ���� �Ǽ��� �Է��϶�>> ";

	for (int i = 0; i < 5; i++) {
		cin >> arr_double[i];
		if (max < arr_double[i]) {
			max = arr_double[i];
		}
	}

	cout << "���� ū �� = " << max << endl;

	return 0;
}