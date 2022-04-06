/*
* 1에서 10까지 더한 결과값을 출력하는 프로그램
*/

#include <iostream>
using namespace std;

int main() {

	int sum = 0;	//더한 값을 출력해줄 변수sum
	
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	cout << "1에서 10까지 더한 결과는 " << sum << "입니다.";
	
	return 0;
}