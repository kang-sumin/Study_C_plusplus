/*
* ���ڿ��� 2�� �Է¹ް� 2���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�.
* ���ڿ����� ������ ����.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s1[100], s2[100]; //char�迭 ���ڿ� ���� ����

	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	cin >> s1;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>> ";
	cin >> s2;

	if (strcmp(s1, s2) == 0) {
		cout << "�����ϴ�." << endl;
	}
	else {
		cout << "�ٸ��ϴ�." << endl;
	}

	return 0;
}
