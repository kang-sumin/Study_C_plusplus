/*RectManager 클래스 전체를 Rect 클래스의 프렌드로 선언함, RectManager 클래스의 멤버함수는 Rect 클래스의 private 멤버변수에 자유롭게 접근가능*/
#include <iostream>
using namespace std;

class Rect; //Rect class가 선언되기 전에 먼저 참조되는 컴파일 오류(forward regerence)를 막기위한 선언문(forward declaration)

//RectManager class 선언
class RectManager {
public:
	bool equals(Rect r, Rect s); //r과 s가 같으면 true 리턴
	void copy(Rect& dest, Rect& src); //src를 dest에 복사
};

//Rect class 선언
//friend 선언은 클래스 내의 private, public 영역 등 아무 위치에서나 가능함
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	//RectManager 클래스의 모든 함수를 프렌드 함수로 선언
	friend RectManager;
};

//RectManager::equals() 구현
bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

//RectManager::copy() 구현
void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.height = src.height;
}


int main() {
	Rect a(3, 4), b(5, 6); //서로다른 값으로 객체 a,b 생성
	RectManager man;

	man.copy(a, b); // b를 a에 복사함 : 객체 a 의 width, height 값이 b와 같아짐

	if (man.equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}
