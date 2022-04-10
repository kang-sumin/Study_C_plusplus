/*
* "yes"가 입력될 때까지 종료하지 않는 프로그램 작성하라.
* 입력은 cin.getline() 함수 사용하라.
*/

#include <iostream>
#include <cstring> //strcmp()함수 사용위해 전처리함
using namespace std;

int main() {
	char input_c[100]; //입력받는 문자열 저장 배열변수
	char compare_c[100] = "yes"; //비교 문자열

	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(input_c, 100); //공백 포함 c-스트링 문자열 입력받음

		if (strcmp(input_c, compare_c) == 0) {
			cout << "종료합니다..." << endl;
			break;
		}
	}

	return 0;
}