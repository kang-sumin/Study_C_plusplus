#include<iostream>
using namespace std;

/*
* 문제 (3)에서 int countPass(Dept& dept); 처럼 
참조 연산자만 추가하여 참조에 의한 호출을 사용하면 
복사 생성자를 제거하여도 실행 오류가 발생하지 않게 됩니다. 
*/

class Dept {
    int size;
    int* scores;
public:
    Dept(int size) {
        this->size = size;
        scores = new int[size];
    }
    ~Dept();
    int getSize() { return size; }
    void read();
    bool isOver60(int index);
};

int countPass(Dept& dept) { // 참조에 의한 호출로 변경 
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i))
            count++;
    }
    return count;
}

Dept::~Dept() {
    delete[] scores;
}
void Dept::read() {
    cout << size << "개 점수 입력>> ";
    for (int i = 0; i < size; ++i) {
        cin >> scores[i];
    }
}
bool Dept::isOver60(int index) {
    if (scores[index] > 60)
        return true;
    else
        return false;
}

int main() {
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명";
}
