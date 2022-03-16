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
		/*strtok() 함수 : char*(포인터) 타입의 문자열 str을 첫번째 매개변수로 받아서,
		두번째 매개변수로 들어온 char* 타입의 구분자를 기준으로
		문자열을 잘라서 문자열의 포인터를 하나씩 하나씩 반환하는 함수 입니다.

		strtok의 첫번째 반환값은 "삽인한 첫번째숫자"가 됩니다.
		이 상태에서 또다시 strtok(NULL, " "); 함수를 호출하게 되면
		이전에 찾은 구분자 뒤에서 부터 다시 구분자를 찾게 됩니다.
		
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
			cout << "잘못 입력하였습니다." << endl;
			break;
		}

		if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
			cout << a << ' ' << op << ' ' << b << " = " << res << endl;
		}

	}
	
	return 0;
}
*/