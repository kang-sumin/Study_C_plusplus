#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "문자열 입력>>";
    getline(cin, str);

    int num = 0;
    int j = -1;
    while (true) {
        j = (int)str.find('a', j + 1); // index 0 부터 'a'를 탐색 
        if (j == -1) break; // 'a'를 찾지 못했으면 break 
        num++;
    }
    cout << "문자 a는 " << num << "개 있습니다.";
}
