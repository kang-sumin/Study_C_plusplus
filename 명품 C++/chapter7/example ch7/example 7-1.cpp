/* 2개의 Rect 객체를 비교하는 bool equals(Rect r, Rect s)를 Rect class의 friend 함수로 작성하라*/

#include <iostream>
using namespace std;


class Rect; //Rect class가 선언되기 전에 먼저 참조되는 컴파일 오류(forward reference)를 막기위한 선언문(forward declaration))
bool equals(Rect r, Rect s); //equals() 함수 선언


//Rect class 선언
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }	//인라인 함수로 선언및 구현함
	friend bool equals(Rect r, Rect s); //equals() 함수를 프렌드 함수로 선언

};


//equals()함수 구현, equals()함수는 외부 함수임
bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)	//외부 함수이지만 Rect class의 friend 함수로 선언되어서 private한 width,height 변수에 접근 가능
		return true;
	else
		return false;
}


int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}