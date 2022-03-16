#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, o;
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	cout << "사또>>";
	getline(cin, s);
	cout << "아랑>>";
	getline(cin, o);

	if (s == "바위") {
		if (o == "바위") cout << "비겼습니다." << endl;
		else if (o == "가위") cout << "사또가 이겼습니다." << endl;
		else if (o == "보") cout << "아랑이 이겼습니다." << endl;
	}
	else if (s == "가위") {
		if (o == "가위") cout << "비겼습니다." << endl;
		else if (o == "보") cout << "사또가 이겼습니다." << endl;
		else if (o == "바위") cout << "아랑이 이겼습니다." << endl;
	}
	else if (s == "보") {
		if (o == "보") cout << "비겼습니다." << endl;
		else if (o == "바위") cout << "사또가 이겼습니다." << endl;
		else if (o == "가위") cout << "아랑이 이겼습니다." << endl;
	}
}