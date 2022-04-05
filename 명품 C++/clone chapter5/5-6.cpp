#include<iostream>
using namespace std;

/*
* 참조에 의한 호출 뿐 아니라 참조를 리턴하는 함수 작성함
* 원하는 문자를 찾을 시 그 위치의 참조를 리턴해 참조변수 loc에 넣고
* 나중에 그 값을 변경 함
*/

char& find(char a[], char c, bool& success) {
    int len = sizeof(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == c) {
            success = true;
            return a[i];
        }
    }
}

int main() {
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if (b == false) {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm'; // 'M' 위치에 'm' 기록 
    cout << s << endl; // "mike"가 출력됨 
}
