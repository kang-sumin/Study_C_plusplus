#include<iostream>
#include<string>
using namespace std;

class Board {
public:
    static int cnt;  // static 멤버 변수 선언
    static string* coment; // static 멤버 변수 선언
    static void add(string str);
    static void print();
};

// static 변수 공간 할당. //반드시 프로그램의 전역 공간에 선언
int Board::cnt = 0;
string* Board::coment = new string[100];

void Board::add(string str) {
    coment[cnt] = str;
    cnt++;
}

void Board::print() {
    cout << "************* 게시판입니다. *************\n";
    for (int i = 0; i < cnt; i++)
        cout << i << ": " << coment[i] << endl;
    cout << endl;
}

int main() {
    // Board myBoard; // 객체 생성은 컴파일 오류입니다. 
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
    Board::print();
}
