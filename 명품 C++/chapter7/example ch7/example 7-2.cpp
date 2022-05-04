/*RectManager Ŭ������ equals() ��� �Լ��� Rect Ŭ������ ������� ������*/
#include <iostream>
using namespace std;

class Rect; //Rect class�� ����Ǳ� ���� ���� �����Ǵ� ������ ����(forward regerence)�� �������� ����(forward declaration)

//RectManager class ����
class RectManager {
public:
	bool equals(Rect r, Rect s);
};

//Rect class ����
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	//�ٸ� Ŭ������ RectManager class�� ��� �Լ� equals()�Լ��� Rect class �� ������ �Լ��� ����
	friend bool RectManager::equals(Rect r, Rect s);
};

//RectManager::equals() ����
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