/*
* 1에서 10까지 정수를 한줄에 10개씩 출력하라
*/

#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 100; i++) {
		cout << i <<"\t";
		//10으로 나눈 나머지가 0일때 줄바꿈
		if (i % 10 == 0) {
			cout << endl;
		}
	}

	return 0;
}
