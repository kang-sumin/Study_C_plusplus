#include<iostream>
#include<string>
using namespace std;

class Board {
public:
    static int cnt;  // static ��� ���� ����
    static string* coment; // static ��� ���� ����
    static void add(string str);
    static void print();
};

// static ���� ���� �Ҵ�. //�ݵ�� ���α׷��� ���� ������ ����
int Board::cnt = 0;
string* Board::coment = new string[100];

void Board::add(string str) {
    coment[cnt] = str;
    cnt++;
}

void Board::print() {
    cout << "************* �Խ����Դϴ�. *************\n";
    for (int i = 0; i < cnt; i++)
        cout << i << ": " << coment[i] << endl;
    cout << endl;
}

int main() {
    // Board myBoard; // ��ü ������ ������ �����Դϴ�. 
    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
    Board::print();
    Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}
