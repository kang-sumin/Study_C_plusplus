/*
* �� ������ ���ؼ� ū�� ��� ���α׷�
*/

#include <iostream>
using namespace std;

int main() {
	int n1, n2;		//�Է¹��� �� ������ ������ ���� ����
	int max = 0;	//ū ���� ������ ���� ����
	cout << "�� ���� �Է��϶� >> ";
	cin >> n1 >> n2;

	if (n1 > n2) {
		max = n1;
	}
	else {
		max = n2;
	}

	cout << "ū �� = " << max << endl;

	return 0;
}