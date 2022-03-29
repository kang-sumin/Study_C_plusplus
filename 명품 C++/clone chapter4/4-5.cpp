#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string sent;
    int n;
    cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
    while (true) {
        srand((unsigned)time(0));
        cout << "\n>>";
        getline(cin, sent);
        if (sent == "exit") break;
        int length = sent.length();
        while (true) {
            n = rand() % length;
            if (sent[n] != ' ')
                break;
        }
        int a = rand() % 25 + 95; // 임의의 문자 하나 선택 
        sent[n] = (char)a;
        cout << sent;
    }
}
