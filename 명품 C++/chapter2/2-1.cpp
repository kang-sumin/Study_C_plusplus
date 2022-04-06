/*
* 1에서 10까지 정수를 한줄에 10개씩 출력하라
*/

#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 100; i++) {
		cout << i <<"\t";
		if (i % 10 == 0) {
			cout << endl;
		}
	}

	return 0;
}