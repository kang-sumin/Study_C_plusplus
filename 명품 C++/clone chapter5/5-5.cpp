#include<iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r) { radius = r; }
    int getRadius() { return radius; }
    void setRadius(int r) { radius = r; }
    void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};

//Circle 객체 b를 a에 더하여 a를 키우고자 다음 함수를 작성하였다.
void increaseBy(Circle& a, Circle& b) {
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}

int main() {
    Circle x(10), y(5);
    increaseBy(x, y); // x의 반지름이 15인 원을 만들고자 한다. 
    x.show(); // "반지름이 15인 원"을 출력한다. 
}
