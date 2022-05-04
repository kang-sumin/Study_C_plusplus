/*RectManager Ŭ���� ��ü�� Rect Ŭ������ ������� ������, RectManager Ŭ������ ����Լ��� Rect Ŭ������ private ��������� �����Ӱ� ���ٰ���*/
#include <iostream>
using namespace std;

class Rect; //Rect class�� ����Ǳ� ���� ���� �����Ǵ� ������ ����(forward regerence)�� �������� ����(forward declaration)

//RectManager class ����
class RectManager {
public:
	bool equals(Rect r, Rect s); //r�� s�� ������ true ����
	void copy(Rect& dest, Rect& src); //src�� dest�� ����
};

//Rect class ����
//friend ������ Ŭ���� ���� private, public ���� �� �ƹ� ��ġ������ ������
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	//RectManager Ŭ������ ��� �Լ��� ������ �Լ��� ����
	friend RectManager;
};

//RectManager::equals() ����
bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

//RectManager::copy() ����
void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.height = src.height;
}


int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(a, b); // b�� a�� ������ : ��ü a �� width, height ���� b�� ������

	if (man.equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}