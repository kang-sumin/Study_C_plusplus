#include<iostream>
using namespace std;

class Circle {
    int radius; // ���� ������ �� 
public:
    void setRadius(int radius); // �������� �����Ѵ�. 
    double getArea(); // ������ �����Ѵ�. 
};

void Circle::setRadius(int r) {
    radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {
    int cnt = 0, r;
    Circle* pArray = new Circle[3]; // �������� ��ü �迭 ����
    for (int i = 0; i < 3; i++) {
        cout << "�� " << i + 1 << "�� ������ >> ";
        cin >> r;
        pArray[i].setRadius(r);
        if (pArray[i].getArea() > 100) // ������ 100���� ũ�� ī��Ʈ 
            cnt++;
    }
    cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
    delete pArray;
}
