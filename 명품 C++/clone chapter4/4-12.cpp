#include<iostream>
#include<string>
using namespace std;

class Circle {
    int radius; // ���� ������ �� 
    string name; // ���� �̸� 
public:
    void setCircle(string name, int radius); // �̸��� ������ ���� 
    double getArea();
    string getName();
};

class CircleManager {
    Circle* p; // Circle �迭�� ���� ������ 
    int size; // �迭�� ũ�� 
    int radius;
    string name;
public:
    CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ� 
    ~CircleManager();
    void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ��� 
    void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ��� 
};

void Circle::setCircle(string name, int radius) {
    this->name = name;
    this->radius = radius;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

string Circle::getName() {
    return name;
}

CircleManager::CircleManager(int size) {
    p = new Circle[size];
    this->size = size;
    for (int i = 0; i < size; i++) {
        cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }
}

CircleManager::~CircleManager() {
    delete[] p;
}

void CircleManager::searchByName() {
    cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
    cin >> name;
    for (int i = 0; i < size; i++) {
        if (name == p[i].getName()) {
            cout << name << "�� ������ " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
    cin >> radius;
    cout << radius << "���� ū ���� �˻��մϴ�.\n";
    for (int i = 0; i < size; i++) {
        if (radius < p[i].getArea()) {
            cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
        }
    }
}

int main() {
    int size;
    cout << "���� ���� >> ";
    cin >> size;
    CircleManager CM(size);
    CM.searchByName();
    CM.searchByArea();

}
