#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include<cstdlib>
using namespace std;


int main() {

	char input[100];
	char* op;

	int front, rear;

	while (true) {
		/*strtok() �Լ� : char*(������) Ÿ���� ���ڿ� str�� ù��° �Ű������� �޾Ƽ�,
		�ι�° �Ű������� ���� char* Ÿ���� �����ڸ� ��������
		���ڿ��� �߶� ���ڿ��� �����͸� �ϳ��� �ϳ��� ��ȯ�ϴ� �Լ� �Դϴ�.

		strtok�� ù��° ��ȯ���� "������ ù��°����"�� �˴ϴ�.
		�� ���¿��� �Ǵٽ� strtok(NULL, " "); �Լ��� ȣ���ϰ� �Ǹ�
		������ ã�� ������ �ڿ��� ���� �ٽ� �����ڸ� ã�� �˴ϴ�.
		
		*/

		cout << "? ";
		cin.getline(input, 100);
		front = atoi(strtok(input, " "));
		op = strtok(NULL, " ");
		rear = atoi(strtok(NULL, " "));

		if (*op == '+') {
			cout << front << " + " << rear << " = " << front + rear << endl;
		}
		else if (*op == '-') {
			cout << front << " - " << rear << " = " << front - rear << endl;
		}
		else if (*op == '*') {
			cout << front << " * " << rear << " = " << front * rear << endl;
		}
		else if (*op == '/') {
			cout << front << " / " << rear << " = " << front / rear << endl;
		}
		else if (*op == '%') {
			cout << front << " % " << rear << " = " << front % rear << endl;
		}
	}
	return 0;
}




/*
int main() {

	char input[100];
	char op;
	int a, b, res;

	while (true) {
		cout << "? ";
		for (int i = 0; i < 3; i++) {
			cin.getline(input, 100, ' ');

			if (i == 0) {
				a = atoi(input);
			}
			else if (i == 1) {
				op = input[0];
			}
			else {
				b = atoi(input);
			}
		}

		switch (op) {
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
		case '%':
			res = a % b;
			break;
		default:
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
			break;
		}

		if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
			cout << a << ' ' << op << ' ' << b << " = " << res << endl;
		}

	}
	
	return 0;
}
*/