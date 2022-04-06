/*
* 두 정수를 비교해서 큰수 출력 프로그램
*/

#include <iostream>
using namespace std;

int main() {
	int n1, n2;		//입력받은 두 정수를 저장할 변수 선언
	int max = 0;	//큰 수를 저장할 변수 선언
	cout << "두 수를 입력하라 >> ";
	cin >> n1 >> n2;

	if (n1 > n2) {
		max = n1;
	}
	else {
		max = n2;
	}

	cout << "큰 수 = " << max << endl;

	return 0;
}