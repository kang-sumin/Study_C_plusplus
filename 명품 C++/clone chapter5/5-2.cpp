#include<iostream>
using namespace std;

void half(double& num) { // 참조에 의한 호출
    num /= 2; // num으로 넘어온 본래의 값이 바뀜 
}

int main() {
    double n = 20;
    half(n); // n의 반값을 구해 n을 바꾼다. 
    cout << n; // 10이 출력된다. 
}
