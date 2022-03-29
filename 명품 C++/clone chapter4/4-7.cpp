#include<iostream>
using namespace std;

class Circle {
    int radius; // 원의 반지름 값 
public:
    void setRadius(int radius); // 반지름을 설정한다. 
    double getArea(); // 면적을 리턴한다. 
};

void Circle::setRadius(int r) {
    radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {
    int cnt = 0, r;
    Circle* pArray = new Circle[3]; // 동적으로 객체 배열 생성
    for (int i = 0; i < 3; i++) {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> r;
        pArray[i].setRadius(r);
        if (pArray[i].getArea() > 100) // 면적이 100보다 크면 카운트 
            cnt++;
    }
    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
    delete pArray;
}
