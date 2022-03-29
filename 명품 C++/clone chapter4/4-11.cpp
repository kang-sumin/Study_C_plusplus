#include<iostream>
using namespace std;

class Container {                 // �� �ϳ��� ��Ÿ���� Ŭ���� 
    int size;                    // ���� ���� ��, �ִ� ���差�� 10 
public:
    Container() { size = 10; }
    void fill();                // �ִ뷮(10)���� ä��� 
    void consume();                // 1 ��ŭ �Ҹ��ϱ� 
    int getSize();                // ���� ũ�� ���� 
};

class CoffeeVendingMachine {    // Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ���� 
    Container tong[3];            // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
    void fill();                 // 3���� ���� ��� 10���� ä�� 
    void selectEspresso();        // ���������Ҹ� ������ ���, Ŀ�� 1, �� 1 �Ҹ� 
    void selectAmericano();        // �Ƹ޸�ī�븦 ������ ���, Ŀ�� 1, �� 2 �Ҹ� 
    void selectSugarCoffee();    // ����Ŀ�Ǹ� ������ ���, Ŀ�� 1, �� 2, ���� 1 �Ҹ�
    void show();                // ���� Ŀ��, ��, ������ �ܷ� ��� 
public:
    void run(); // Ŀ�� ���Ǳ� �۵� 
};

int start = 0;

void Container::fill() {
    size = 10;
}
void Container::consume() {
    size--;
}
int Container::getSize() {
    return size;
}

void CoffeeVendingMachine::run() {
    int num;
    if (start == 0)
        cout << "***** Ŀ�� ���Ǳ⸦ �۵��մϴ�. *****\n";
    start++;
    while (true) {
        cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
        cin >> num;
        switch (num) {
        case 1:
            selectEspresso();
            break;
        case 2:
            selectAmericano();
            break;
        case 3:
            selectSugarCoffee();
            break;
        case 4:
            show();
            break;
        case 5:
            fill();
            break;
        }
    }
}

void CoffeeVendingMachine::selectEspresso() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "���ᰡ �����մϴ�.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    cout << "���������� �弼��\n";
}

void CoffeeVendingMachine::selectAmericano() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "���ᰡ �����մϴ�.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume(); tong[1].consume();
    cout << "�Ƹ޸�ī�� �弼��\n";
}

void CoffeeVendingMachine::selectSugarCoffee() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "���ᰡ �����մϴ�.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume(); tong[1].consume();
    tong[2].consume();
    cout << "����Ŀ�� �弼��\n";
}

void CoffeeVendingMachine::show() {
    cout << "Ŀ�� " << tong[0].getSize();
    cout << ", �� " << tong[1].getSize();
    cout << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::fill() {
    for (int i = 0; i < 3; i++) {
        tong[i].fill();
    }
    show();
}

int main() {
    CoffeeVendingMachine* coffee = new CoffeeVendingMachine;
    coffee->run();
    delete coffee;
}
