#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Random {
public:
    static void seed() { srand((unsigned)time(0)); }
    static int nextInt(int min = 0, int max = 32767);
    static char nextAlphabet();
    static double nextDouble();
};

int Random::nextInt(int min, int max) {
    int a = 0;
    while (true) {
        a = rand() % (max + 1);
        if (min <= a)
            break;
    }
    return a;
}

char Random::nextAlphabet() {
    char b = 0;
    while (true) {
        b = rand() % 'z';
        if (b >= 'a' || ('A' <= b && b <= 'Z'))
            break;
    }
    return b;
}

double Random::nextDouble() {
    double c = 0;
    double max = 32767;
    c = rand() / max;
    return c;
}

int main() {
    Random::seed();
    cout << "1���� 100���� ������ ���� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextInt(1, 100) << ' ';
    }
    cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl << "������ �Ǽ��� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << ' ';
        if (i == 4) cout << endl;
    }
}
