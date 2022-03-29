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
    cout << "원의 개수 >> ";
    cin >> num;
    Circle* pArray = new Circle[num]; // 입력받은 num만큼 동적으로 객체 배열 생성 
    for (int i = 0; i < num; i++) {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> r;
        pArray->setRadius(r);
        if (pArray->getArea() > 100)
            cnt++;
        pArray++;
    }
    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}
