/*
* <Enter> 키가 입력될 때까지 문자들을 읽고,
입력된 문자 'x'의 개수를 화면에 출력하라.
*/

#include <iostream>
#include <cstring>	//strlen()함수 사용하기 위해 전처리 해줌
using namespace std;

int main() {
	//c-스트링을 사용하여 문자열을 처리함
	char string[100];
	int count = 0;	//'x'의 개수를 저장할 변수

	cout << "문자들을 입력하라(100개 미만)" << endl;
	/*공백이 포함된 문자열을 입력받을때 사용함
	* cin 객체의 getline()멤버함수를 이용하였음
	* 
	* cin.getline(char buf[], int size, char delimitChar)
	* buf : 키보드로부터 읽은 문자열을 저장할 배열
	* size : buf[] 배열의 크기
	* delimitChar : 문자열 입력 끝을 지정하는 구분 문자
	* -->delimitChar 의 default 값은 '\n' 임
	*/
	cin.getline(string, 100, '\n');

	//문자열을 전부 검색하는 것 보다 
	//문자열 크기만큼 검색하는것이 효율적임
	//strlen(string) : 문자열 길이 반환 함수
	cout <<"문자열 길이 : " << strlen(string) << endl;

	for (int i = 0; i < strlen(string); i++) {
		if (string[i] == 'x') {
			count++;
		}
	}
	
	cout << "x의 개수는 " << count << endl;

	return 0;
}