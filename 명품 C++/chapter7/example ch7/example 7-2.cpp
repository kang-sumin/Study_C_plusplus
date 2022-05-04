/*RectManager 클래스의 equals() 멤버 함수를 Rect 클래스의 프렌드로 선언함*/
#include <iostream>
using namespace std;

class Rect; //Rect class가 선언되기 전에 먼저 참조되는 컴파일 오류(forward regerence)를 막기위한 선언문(forward declaration)

//RectManager class 선언
class RectManager {
public:
	bool equals(Rect r, Rect s);
};

//Rect class 선언
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	//다른 클래스인 RectManager class의 멤버 함수 equals()함수를 Rect class 의 프렌드 함수로 선언
	friend bool RectManager::equals(Rect r, Rect s);
};

//RectManager::equals() 구현
bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;

	if (man.equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}