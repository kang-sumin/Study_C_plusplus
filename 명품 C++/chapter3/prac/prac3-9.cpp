#include <iostream>
using namespace std;

// Oval 클래스 선언부
class Oval {
	int width, height;
public:
	//생성자
	Oval();
	Oval(int w, int h);
	//소멸자
	~Oval(); 
	//타원 너비 리턴 함수
	int getWidth();
	//타원높이 리턴 함수
	int getHeight();
	//타원 너비,높이 변경 함수
	void set(int w, int h);
	//너비,높이 출력 함수
	void show();
};

// Oval 클래스 구현부
//생성자
//위임생성자로 작성 가능하지만 이 부분은 따로 구현해 주었음
Oval::Oval() { // 이 생성자는 한 줄로 작성 가능. Oval::Oval() : Oval(1) { }
	width = height = 1;
}
Oval::Oval(int w, int h) {
	width = w; height = h;
}
//소멸자 구현부
Oval::~Oval() {
	cout << "Oval 소멸 : ";
	show();
}
void Oval::set(int w, int h) {
	width = w; height = h;
}
void Oval::show() {
	cout << "width = " << width << ", " << "height = " << height << endl;
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}

// main() 함수
int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}
