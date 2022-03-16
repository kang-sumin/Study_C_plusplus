#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

bool checkInputError() {
	if (cin.fail()) { // 정수대신 문자열이 입력되어 오류가 발생하는 경우 대처. 부록 C의 예제 C-1참고
		cin.clear();
		cin.ignore(100, '\n');
		cout << "입력 오류" << endl;
		return true; // 오류 있음
	}
	else
		return false; // 오류 없음
}

int main() {
	char coffee[100];
	int num;
	int cost = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	
	while (true) {
		cout << "주문>>";
		cin >> coffee >> num;
		if (checkInputError()) continue;

		if (num < 1) {
			cout << "다시 주문해주세요!!" << endl;
			continue;
		}
		if (strcmp(coffee, "에스프레소") == 0) {
			cout << 2000 * num << "원 입니다. 맛있게 드세요\n";
			cost += 2000 * num;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			cout << 2300 * num << "원 입니다. 맛있게 드세요\n";
			cost += 2300 * num;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			cout << 2500 * num << "원 입니다. 맛있게 드세요\n";
			cost += 2500 * num;
		}
		else {
			cout << "다시 주문해주세요!!" << endl;
			continue;
		}
		if (cost >= 20000) {
			cout << "오늘 " << cost << "원을 판매하여 카페를 닫습니다. 내일봐요~~~"<<endl;
			break;
		}
	}
	
	return 0;

}