#include<iostream>
using namespace std;

int add(int* a, int b) {
    int sum = 0;
    for (int i = 0; i < b; i++)
        sum += a[i];
    return sum;
}

int add(int* a, int b, int* c) {
    int sum = 0;
    for (int i = 0; i < b; i++)
        sum += a[i] + c[i];
    return sum;
}

int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };
    int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ���� 
    int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ���� 
    cout << c << endl; // 15 ��� 
    cout << d << endl; // 55 ��� 
}
