/*
* "yes"�� �Էµ� ������ �������� �ʴ� ���α׷� �ۼ��϶�.
* �Է��� cin.getline() �Լ� ����϶�.
*/

#include <iostream>
#include <cstring> //strcmp()�Լ� ������� ��ó����
using namespace std;

int main() {
	char input_c[100]; //�Է¹޴� ���ڿ� ���� �迭����
	char compare_c[100] = "yes"; //�� ���ڿ�

	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(input_c, 100); //���� ���� c-��Ʈ�� ���ڿ� �Է¹���

		if (strcmp(input_c, compare_c) == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}

	return 0;
}