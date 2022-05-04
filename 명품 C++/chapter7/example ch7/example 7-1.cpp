/* 2���� Rect ��ü�� ���ϴ� bool equals(Rect r, Rect s)�� Rect class�� friend �Լ��� �ۼ��϶�*/

#include <iostream>
using namespace std;


class Rect; //Rect class�� ����Ǳ� ���� ���� �����Ǵ� ������ ����(forward reference)�� �������� ����(forward declaration))
bool equals(Rect r, Rect s); //equals() �Լ� ����


//Rect class ����
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }	//�ζ��� �Լ��� ����� ������
	friend bool equals(Rect r, Rect s); //equals() �Լ��� ������ �Լ��� ����

};


//equals()�Լ� ����, equals()�Լ��� �ܺ� �Լ���
bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)	//�ܺ� �Լ������� Rect class�� friend �Լ��� ����Ǿ private�� width,height ������ ���� ����
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