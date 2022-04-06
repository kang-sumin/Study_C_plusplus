/*
* 구구단 출력 프로그램
*/

#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << j << "×" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}

	return 0;
}