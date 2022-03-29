#include<iostream>
using namespace std;

class Container {                 // 통 하나를 나타내는 클래스 
    int size;                    // 현재 저장 량, 최대 저장량은 10 
public:
    Container() { size = 10; }
    void fill();                // 최대량(10)으로 채우기 
    void consume();                // 1 만큼 소모하기 
    int getSize();                // 현재 크기 리턴 
};

class CoffeeVendingMachine {    // 커피자판기를 표현하는 클래스 
    Container tong[3];            // tong[0]는 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
    void fill();                 // 3개의 통을 모두 10으로 채움 
    void selectEspresso();        // 에스프레소를 선택한 경우, 커피 1, 물 1 소모 
    void selectAmericano();        // 아메리카노를 선택한 경우, 커피 1, 물 2 소모 
    void selectSugarCoffee();    // 설탕커피를 선택한 경우, 커피 1, 물 2, 설탕 1 소모
    void show();                // 현재 커피, 물, 설탕의 잔량 출력 
public:
    void run(); // 커피 자판기 작동 
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
        cout << "***** 커피 자판기를 작동합니다. *****\n";
    start++;
    while (true) {
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
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
            cout << "원료가 부족합니다.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume();
    cout << "에스프레소 드세요\n";
}

void CoffeeVendingMachine::selectAmericano() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "원료가 부족합니다.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume(); tong[1].consume();
    cout << "아메리카노 드세요\n";
}

void CoffeeVendingMachine::selectSugarCoffee() {
    for (int i = 0; i < 3; i++) {
        if (tong[i].getSize() == 0) {
            cout << "원료가 부족합니다.\n";
            run();
        }
    }
    tong[0].consume();
    tong[1].consume(); tong[1].consume();
    tong[2].consume();
    cout << "설탕커피 드세요\n";
}

void CoffeeVendingMachine::show() {
    cout << "커피 " << tong[0].getSize();
    cout << ", 물 " << tong[1].getSize();
    cout << ", 설탕 " << tong[2].getSize() << endl;
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
