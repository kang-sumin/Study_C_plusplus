#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) { // big은 참조에 의한 호출

	if (a == b) 
		return true;
	if (a > b)
		big = a;
	else 
		big = b;

	return false;
}

int main() {
	int x, y, big;
	bool b;
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	

	if (b)
		cout << "same" << endl;
	else
		cout << "큰 수는 " << big << endl;
}