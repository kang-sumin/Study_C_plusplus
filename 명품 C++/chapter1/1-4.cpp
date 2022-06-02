/*
* 직각 삼각형 별 출력 프로그램
*/

#include <iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "삼각형 크기를 입력하시오 : ";
	cin >> num;
	
	//이중 for문을 이용해 직각사각형 출력
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
