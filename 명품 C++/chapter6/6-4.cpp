#include<iostream>
using namespace std;

class MyVector {
    int* mem;
    int size;
public:
    MyVector(int n = 100, int val = 0);
    void show();
    ~MyVector() { delete[] mem; }
};

MyVector::MyVector(int n, int val) {
    mem = new int[n];
    size = n;
    for (int i = 0; i < size; i++) mem[i] = val;
}

void MyVector::show() {
    cout << "size = " << size << endl;
    for (int i = 0; i < size; i++) cout << mem[i] << ' ';
    cout << endl;
}

int main() {
    MyVector a;
    MyVector b(10, 50);
    cout << "testing ..." << endl << endl;
    a.show();
    cout << endl;
    b.show();
}
