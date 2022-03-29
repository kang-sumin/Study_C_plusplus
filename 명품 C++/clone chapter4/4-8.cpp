#include<iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int r) {
    radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {
    int r, num, cnt = 0;
    cout << "���� ���� >> ";
    cin >> num;
    Circle* pArray = new Circle[num]; // �Է¹��� num��ŭ �������� ��ü �迭 ���� 
    for (int i = 0; i < num; i++) {
        cout << "�� " << i + 1 << "�� ������ >> ";
        cin >> r;
        pArray->setRadius(r);
        if (pArray->getArea() > 100)
            cnt++;
        pArray++;
    }
    cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
}
