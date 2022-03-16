#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";
	char c[100];
	cin.getline(c, 100, '\n');

	int count=0;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == 'x') {
			count += 1;
		}
	}

	cout << "x의 개수는 " << count;

	return 0;
}