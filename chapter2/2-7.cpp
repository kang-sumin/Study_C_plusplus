#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char end[100];
	char yes[100] = "yes";

	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(end, 100);
		if (strcmp(end,yes)==0) {
			cout << "종료합니다...";
			break;
		}
	}

	return 0;
}