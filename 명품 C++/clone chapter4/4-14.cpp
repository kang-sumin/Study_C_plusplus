#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
    string name;
public:
    void setName(string name);
    string getName() { return name; };
};

class GamblingGame {
    Player* p = new Player[2];
public:
    GamblingGame();
    void nameSet();
    string ranNum(string n);
    void startGame();
    ~GamblingGame() { delete[] p; }
};

GamblingGame::GamblingGame() {
    cout << "***** 갬블링 게임을 시작합니다. *****\n";
    srand(time(NULL));
}

void GamblingGame::nameSet() {
    string name;
    cout << "첫번째 선수 이름>>";
    cin >> name;
    p[0].setName(name);
    cout << "두번째 선수 이름>>";
    cin >> name;
    p[1].setName(name);
}

string GamblingGame::ranNum(string n) {
    int r[3];
    cout << "\t\t";
    for (int i = 0; i < 3; i++) {
        r[i] = rand() % 3;
        cout << r[i] << "\t";
    }
    if (r[0] == r[1] && r[0] == r[2]) {
        n += "님 승리!!";
        return n;
    }
    else
        return "아쉽군요!";
}

void GamblingGame::startGame() {
    string n;
    int i = 0;
    while (true) {
        string m;
        cout << p[i % 2].getName() << ":\n";
        getline(cin, n);
        m = p[i % 2].getName();
        n = ranNum(n);
        if (n == "님 승리!!") {
            cout << m + n;
            break;
        }
        else
            cout << n << endl;
        i++;
    }
}

void Player::setName(string n) {
    name = n;
}

int main() {
    GamblingGame game;
    game.nameSet();
    game.startGame();
}
