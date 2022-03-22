#include <iostream>
using namespace std;

class CoffeeMachine { //클래스 선언부
private:
    int coff, wat, sug; //멤버변수 커피, 물, 설탕
public:
    CoffeeMachine(int _coff, int _wat, int _sug); //생성자
    void drinkEspresso(); 
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill(); //커피머신 리필
    void show(); //실행후 커피머신 상태 보여주는 함수

};

//클래스 구현부
//생성자 구현
CoffeeMachine::CoffeeMachine(int _coff, int _wat, int _sug) {
    coff = _coff;
    wat = _wat;
    sug = _sug;
}

void CoffeeMachine::drinkEspresso() {
    //커피 -1, 물 -1
    coff--;
    wat--;
}

void CoffeeMachine::drinkAmericano() {
    //커피 -1, 물 -2
    coff--;
    wat--; wat--;
}

void CoffeeMachine::drinkSugarCoffee() {
    //커피 -1, 물 -2, 설탕 -1
    coff--;
    wat--; wat--;
    sug--;
}

void CoffeeMachine::fill() {
    coff = 10;
    wat = 10;
    sug = 10;
}

void CoffeeMachine::show() {
    cout << "커피 머신 상태, 커피:" << coff << "\t물:" << wat << "\t설탕:" << sug << endl;
}

int main() {
    CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6 으로 초기화
    java.drinkEspresso(); // 커피 1, 물 1 소비
    java.show(); // 현재 커피 머신의 상태 출력
    java.drinkAmericano(); // 커피 1, 물 2 소비
    java.show(); // 현재 커피 머신의 상태 출력
    java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
    java.show(); // 현재 커피 머신의 상태 출력
    java.fill(); // 커피 10, 물 10, 설탕 10 으로 채우기
    java.show(); // 현재 커피 머신의 상태 출력
}
