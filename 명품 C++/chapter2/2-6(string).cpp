/*
* ���ڿ��� 2�� �Է¹ް� 2���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�.
* ���ڿ����� ������ ����.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2; //���ڿ��� ������ ���ڿ� ���� 2�� ����

	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	cin >> s1;

	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ���>> ";
	cin >> s2;

	if (s1.compare( s2) == 0) {
		cout << "�����ϴ�." << endl;
	}
	else {
		cout << "�ٸ��ϴ�." << endl;
	}

	return 0;
}