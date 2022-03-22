#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

bool checkInputError() {
	if (cin.fail()) { // ������� ���ڿ��� �ԷµǾ� ������ �߻��ϴ� ��� ��ó. �η� C�� ���� C-1����
		cin.clear();
		cin.ignore(100, '\n');
		cout << "�Է� ����" << endl;
		return true; // ���� ����
	}
	else
		return false; // ���� ����
}

int main() {
	char coffee[100];
	int num;
	int cost = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	
	while (true) {
		cout << "�ֹ�>>";
		cin >> coffee >> num;
		if (checkInputError()) continue;

		if (num < 1) {
			cout << "�ٽ� �ֹ����ּ���!!" << endl;
			continue;
		}
		if (strcmp(coffee, "����������") == 0) {
			cout << 2000 * num << "�� �Դϴ�. ���ְ� �弼��\n";
			cost += 2000 * num;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			cout << 2300 * num << "�� �Դϴ�. ���ְ� �弼��\n";
			cost += 2300 * num;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cout << 2500 * num << "�� �Դϴ�. ���ְ� �弼��\n";
			cost += 2500 * num;
		}
		else {
			cout << "�ٽ� �ֹ����ּ���!!" << endl;
			continue;
		}
		if (cost >= 20000) {
			cout << "���� " << cost << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~~"<<endl;
			break;
		}
	}
	
	return 0;

}