#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	char s[100];

	cout << "���ڿ� �Է�>>";
	cin.getline(s, 100);

	for (int i = 0; i < strlen(s); i++) {
		for (int j = 0; j <= i; j++) {
			cout << s[j];
		}
		cout << endl;
	}

}