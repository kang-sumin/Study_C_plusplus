#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	char c[100];
	cin.getline(c, 100, '\n');

	int count=0;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == 'x') {
			count += 1;
		}
	}

	cout << "x�� ������ " << count;

	return 0;
}