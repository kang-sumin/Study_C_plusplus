#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char end[100];
	char yes[100] = "yes";

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(end, 100);
		if (strcmp(end,yes)==0) {
			cout << "�����մϴ�...";
			break;
		}
	}

	return 0;
}