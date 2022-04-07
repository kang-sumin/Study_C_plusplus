/*
* 문자열을 2개 입력받고 2개의 문자열이 같은지 검사하는 프로그램을 작성하라.
* 문자열에는 공백이 없다.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2; //문자열을 저장할 문자열 변수 2개 선언

	cout << "새 암호를 입력하세요>> ";
	cin >> s1;

	cout << "새 암호를 다시 한번 입력하세요>> ";
	cin >> s2;

	if (s1.compare( s2) == 0) {
		cout << "같습니다." << endl;
	}
	else {
		cout << "다릅니다." << endl;
	}

	return 0;
}