#include <iostream>
using namespace std;

//test
class Circle { //Circle 선언부
public:
	int radius;
	double getArea();
};

double Circle::getArea() { //Circle 구현부
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
