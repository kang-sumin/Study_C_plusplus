#include<iostream>
using namespace std;

int big(int a, int b, int c = 100) {
    int max = c;
    int big = a;
    if (big < b)
        big = b;
    if (big > max)
        big = max;
    return big;
}

int main() {
    int x = big(3, 5); // 3�� 5�� ū ���� 5�� �ִ밪 100���� �����Ƿ�, 5 ���� 
    int y = big(300, 60); // 300�� 60 �� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100���� 
    int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50���� 
    cout << x << ' ' << y << ' ' << z << endl;
}
