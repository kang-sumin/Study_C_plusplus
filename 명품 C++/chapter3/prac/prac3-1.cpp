#include <iostream>
using namespace std;

class Tower { //Tower 클래스 선언부
	int height; //멤버 변수
public:
	//한 클래스에 여러개의 생성자를 둘 수 있음, 하지만 이중 하나만 실행됨
	//생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 함, 다른 멤버함수랑 쉽게 구분됨
	Tower(); //객체를 초기화 시키는 생성자 함수
	Tower(int h); //객체를 초기화 시키는 생성자 함수
	int getHeight(); //멤버 함수
};

//생성자의 목적 : 객체가 생성될 때 필요한 초기 작업을 위함
//생성자 함수는 각 객체마다 객체가 생성되는 시점에 오직 한번만 실행됨
//생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 함
//생성자는 함수이지만 리턴 타입을 선언하면 안됨, void도 안됨
//생성자 함수는 함수 실행 종료를 위해 return문을 사용해도 되지만, 어떤 값도 리턴하면 안됨
//생성자는 한 클래스에 여러개 만들 수 있다. 하지만 매개변수의 개수나 타입은 서로 다르게 선언해야함
//생성자를 여러개 작성 가능하게 한 이유는 사용자가 다양한 방법으로 객체를 생성하도록 하기 위함이다.
//생성자는 다른 생성자를 호출 가능(위임 생성자)
//생성자는 꼭 있어야 한다. 개발자가 선언하지 않을시 컴파일러에 의해 기본생성자가 추가된다.

//Tower 클래스 구현부
//매개변수가 없는 경우 생성자 함수 구현
Tower::Tower() {
	//클래스의 멤버 변수들은 자동으로 초기화되지 않기 때문에 생성자에서 초기화 한다.
	//또는 클래스 선언부에서 초기화 해주어도 된다.
	height = 1;
}

//매개변수를 가진 생성자 함수 구현
Tower::Tower(int h) {
	
	height = h;
}

int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower; //객체 1
	Tower seoulTower(100); //객체 2
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}