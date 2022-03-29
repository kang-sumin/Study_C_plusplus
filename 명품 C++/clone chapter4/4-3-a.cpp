#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "문자열 입력>>";
    getline(cin, str);
    int length = str.length();
    int num = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == 'a') num++;
    }
    cout << "문자 a는 " << num << "개 있습니다.";
}
