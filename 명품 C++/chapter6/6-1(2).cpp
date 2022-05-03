#include<iostream>
using namespace std;

int add(int* a, int b, int* c = NULL) {
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += a[i];
        if (c != NULL)
            sum += c[i];
    }
    return sum;
}
int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };
    int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴함
    int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴함 
    cout << c << endl; // 15 출력 
    cout << d << endl; // 55 출력 
}
