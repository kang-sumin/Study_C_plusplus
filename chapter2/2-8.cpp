#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	int compare = 0;
	char name[100];
	char long_name[100];

	cout << "5 ���� �̸��� ';' ���� �����Ͽ� �Է��ϼ���\n"<<">>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;

		if (compare < strlen(name)) {
			compare = strlen(name);
			strcpy(long_name, name);
		}
	}
	cout << "���� �� �̸��� " << long_name << endl;
	

}